arduino nano 코드 설명


#include <SoftwareSerial.h>

//uno에서의 코드 설명
// 핀 설정, 초음파 센서, led, buzzerpin의 위치
SoftwareSerial espSerial(2, 3);
const int TRIG_A = 6;
const int ECHO_A = 7;
const int TRIG_B = 8;
const int ECHO_B = 9;
const int LED_PIN = 4;
const int BUZZER_PIN = 5;

// 변수 플래그- 안전/ 사람끼리 / 차포함 3가지 케이스에 대한 플래그. 
int visionStatus = 0; // 0:안전, 1:사람끼리, 2:차포함
unsigned long lastCheckTime = 0;

// 거리/속도 변수
int distA_prev = 0, distA_curr = 0;
int distB_prev = 0, distB_curr = 0;

    void setup() {
    Serial.begin(9600);
    espSerial.begin(115200);
    
    pinMode(TRIG_A, OUTPUT); pinMode(ECHO_A, INPUT);
    pinMode(TRIG_B, OUTPUT); pinMode(ECHO_B, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    
    Serial.println("Smart Alarm System Started...");
    }

void loop() {
// 1. ESP32 신호 수신 ('0', '1', '2' 구분)
if (espSerial.available()) {
char data = espSerial.read();
if (data == '2') visionStatus = 2;      // 고위험 (차)
else if (data == '1') visionStatus = 1; // 중위험 (사람)
else if (data == '0') visionStatus = 0; // 안전
}

// 2. 초음파 센서 측정 (0.1초 간격)
if (millis() - lastCheckTime > 100) {
lastCheckTime = millis();

    // 센서 A, B 측정 및 속도 계산
    distA_prev = distA_curr;
    distA_curr = getDistance(TRIG_A, ECHO_A); //초음파 센서로부터 정보 획득.
    int speedA = distA_prev - distA_curr;

    distB_prev = distB_curr;
    distB_curr = getDistance(TRIG_B, ECHO_B);
    int speedB = distB_prev - distB_curr;

    // 초음파 위험 조건 (15cm 이내 + 다가옴)
    bool dangerA = (distA_curr > 0 && distA_curr <= 25 && speedA >= 1);
    bool dangerB = (distB_curr > 0 && distB_curr <= 25 && speedB >= 1);
    bool ultrasonicDetected = (dangerA || dangerB);

    // ============================================================
    // ★ 최종 경고 로직 (상황별 분기)
    // ============================================================
    
    if (ultrasonicDetected) { // 초음파로 물체가 다가옴을 확인했을 때
        
        if (visionStatus == 2) { 
            // [상황: 차 포함] -> 강력 경고!
            fastAlarm(); 
        } 
        else if (visionStatus == 1) { 
            // [상황: 사람끼리] -> 약한 경고
            slowAlarm(); 
        } 
        else {
            stopAlarm();
        }
        
    } else {
        stopAlarm(); // 초음파 감지 없으면 무조건 끔
    }
}
}

// 거리 측정 함수
int getDistance(int trigPin, int echoPin) {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
long duration = pulseIn(echoPin, HIGH, 20000);
if (duration == 0) return 999;
return duration * 0.034 / 2;
}

    // 🚨 고위험 경고 (Car): LED 깜빡깜빡 + 삐삐삐삐
    void fastAlarm() {
    // 0.1초 만에 켜고 끄고 반복 (매우 급박함)
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1500); // 높은 음
    delay(50);
    
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(50);
    }



    // ⚠️ 중위험 경고 (Human): LED 켜짐 유지 + 삐... 삐...
    void slowAlarm() {
    // LED는 계속 켜둠 (시각적 알림 강조)
    digitalWrite(LED_PIN, HIGH);
    
    // 소리는 천천히 (0.3초 울리고 0.2초 쉬기)
    tone(BUZZER_PIN, 800); // 낮은 음
    delay(300);
    noTone(BUZZER_PIN);
    delay(200);
    }

    //경고 정지
    
    void stopAlarm() {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    }


==============================
esp32 cam에 업로드할 코드
/* Edge Impulse Arduino examples
* Copyright (c) 2022 EdgeImpulse Inc.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
  */

// These sketches are tested with 2.0.4 ESP32 Arduino Core
// https://github.com/espressif/arduino-esp32/releases/tag/2.0.4

/* Includes ---------------------------------------------------------------- */
#include <dnwls9425-project-1_inferencing.h>
#include "edge-impulse-sdk/dsp/image/image.hpp"

#include "esp_camera.h"

// Select camera model - find more camera models in camera_pins.h file here
// https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/Camera/CameraWebServer/camera_pins.h

//#define CAMERA_MODEL_ESP_EYE // Has PSRAM
#define CAMERA_MODEL_AI_THINKER // Has PSRAM

#if defined(CAMERA_MODEL_ESP_EYE)
#define PWDN_GPIO_NUM    -1
#define RESET_GPIO_NUM   -1
#define XCLK_GPIO_NUM    4
#define SIOD_GPIO_NUM    18
#define SIOC_GPIO_NUM    23

#define Y9_GPIO_NUM      36
#define Y8_GPIO_NUM      37
#define Y7_GPIO_NUM      38
#define Y6_GPIO_NUM      39
#define Y5_GPIO_NUM      35
#define Y4_GPIO_NUM      14
#define Y3_GPIO_NUM      13
#define Y2_GPIO_NUM      34
#define VSYNC_GPIO_NUM   5
#define HREF_GPIO_NUM    27
#define PCLK_GPIO_NUM    25

#elif defined(CAMERA_MODEL_AI_THINKER)
#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27

#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

#else
#error "Camera model not selected"
#endif

/* Constant defines -------------------------------------------------------- */
#define EI_CAMERA_RAW_FRAME_BUFFER_COLS           320
#define EI_CAMERA_RAW_FRAME_BUFFER_ROWS           240
#define EI_CAMERA_FRAME_BYTE_SIZE                 3

/* Private variables ------------------------------------------------------- */
static bool debug_nn = false; // Set this to true to see e.g. features generated from the raw signal
static bool is_initialised = false;
uint8_t *snapshot_buf; //points to the output of the capture

static camera_config_t camera_config = {
.pin_pwdn = PWDN_GPIO_NUM,
.pin_reset = RESET_GPIO_NUM,
.pin_xclk = XCLK_GPIO_NUM,
.pin_sscb_sda = SIOD_GPIO_NUM,
.pin_sscb_scl = SIOC_GPIO_NUM,

    .pin_d7 = Y9_GPIO_NUM,
    .pin_d6 = Y8_GPIO_NUM,
    .pin_d5 = Y7_GPIO_NUM,
    .pin_d4 = Y6_GPIO_NUM,
    .pin_d3 = Y5_GPIO_NUM,
    .pin_d2 = Y4_GPIO_NUM,
    .pin_d1 = Y3_GPIO_NUM,
    .pin_d0 = Y2_GPIO_NUM,
    .pin_vsync = VSYNC_GPIO_NUM,
    .pin_href = HREF_GPIO_NUM,
    .pin_pclk = PCLK_GPIO_NUM,

    //XCLK 20MHz or 10MHz for OV2640 double FPS (Experimental)
    .xclk_freq_hz = 20000000,
    .ledc_timer = LEDC_TIMER_0,
    .ledc_channel = LEDC_CHANNEL_0,

    .pixel_format = PIXFORMAT_JPEG, //YUV422,GRAYSCALE,RGB565,JPEG
    .frame_size = FRAMESIZE_QVGA,    //QQVGA-UXGA Do not use sizes above QVGA when not JPEG

    .jpeg_quality = 12, //0-63 lower number means higher quality
    .fb_count = 1,       //if more than one, i2s runs in continuous mode. Use only with JPEG
    .fb_location = CAMERA_FB_IN_PSRAM,
    .grab_mode = CAMERA_GRAB_WHEN_EMPTY,
};

/* Function definitions ------------------------------------------------------- */
bool ei_camera_init(void);
void ei_camera_deinit(void);
bool ei_camera_capture(uint32_t img_width, uint32_t img_height, uint8_t *out_buf) ;

/**
* @brief      Arduino setup function
  */
  void setup()
  {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //comment out the below line to start inference immediately after upload
  while (!Serial);
  Serial.println("Edge Impulse Inferencing Demo");
  if (ei_camera_init() == false) {
  ei_printf("Failed to initialize Camera!\r\n");
  }
  else {
  ei_printf("Camera initialized\r\n");
  }

  ei_printf("\nStarting continious inference in 2 seconds...\n");
  ei_sleep(2000);
  }

/**
* @brief      Get data and run inferencing
*
* @param[in]  debug  Get debug info if true
  */
  /* * ESP32-CAM: 위험도 등급 분류 코드
* loop() 함수만 이걸로 덮어쓰세요.
  */

void loop() {
// 1. 사진 촬영
if (ei_camera_capture(EI_CLASSIFIER_INPUT_WIDTH, EI_CLASSIFIER_INPUT_HEIGHT, snapshot_buf) == false) {
return;
}

    // 2. AI 분석
    signal_t signal;
    signal.total_length = EI_CLASSIFIER_INPUT_WIDTH * EI_CLASSIFIER_INPUT_HEIGHT;
    signal.get_data = &ei_camera_get_data;

    ei_impulse_result_t result = { 0 };
    EI_IMPULSE_ERROR err = run_classifier(&signal, &result, debug_nn);
    if (err != EI_IMPULSE_OK) {
        Serial.printf("ERR: Failed to run classifier (%d)\n", err);
        return;
    }

    // ============================================================
    // ★ 위험도 판별 로직
    // ============================================================
    bool leftHasCar = false;
    bool leftHasHuman = false;
    bool rightHasCar = false;
    bool rightHasHuman = false;
    
    int centerX = EI_CLASSIFIER_INPUT_WIDTH / 2;

    for (size_t ix = 0; ix < result.bounding_boxes_count; ix++) {
        auto bb = result.bounding_boxes[ix];
        
        if (bb.value > 0.6) { // 확신도 60% 이상
             int objectCenter = bb.x + (bb.width / 2);
             String label = String(bb.label);

             // 왼쪽 길에 있는 물체 확인
             if (objectCenter < centerX) {
                 if (label == "Car") leftHasCar = true;
                 if (label == "Human") leftHasHuman = true;
             } 
             // 오른쪽 길에 있는 물체 확인
             else {
                 if (label == "Car") rightHasCar = true;
                 if (label == "Human") rightHasHuman = true;
             }
        }
    }

    // 왼쪽과 오른쪽에 '무언가'가 존재하는지 체크
    bool leftDetected = (leftHasCar || leftHasHuman);
    bool rightDetected = (rightHasCar || rightHasHuman);

    // ★ 최종 판단 및 전송
    if (leftDetected && rightDetected) {
        // 경우 1: 차가 하나라도 끼어 있으면 -> "고위험 ('2')"
        // (Car-Car, Car-Human, Human-Car 모두 포함)
        if (leftHasCar || rightHasCar) {
            Serial.println("DANGER: CAR INVOLVED! (Lv.2)");
            Serial.write('2'); 
        }
        // 경우 2: 차는 없고 사람끼리만 있으면 -> "중위험 ('1')"
        // (Human-Human)
        else {
            Serial.println("WARNING: Pedestrians (Lv.1)");
            Serial.write('1');
        }
    } 
    else {
        // 안전
        Serial.write('0');
    }
}

/**
* @brief   Setup image sensor & start streaming
*
* @retval  false if initialisation failed
  */
  bool ei_camera_init(void) {

  if (is_initialised) return true;

#if defined(CAMERA_MODEL_ESP_EYE)
pinMode(13, INPUT_PULLUP);
pinMode(14, INPUT_PULLUP);
#endif

    //initialize the camera
    esp_err_t err = esp_camera_init(&camera_config);
    if (err != ESP_OK) {
      Serial.printf("Camera init failed with error 0x%x\n", err);
      return false;
    }

    sensor_t * s = esp_camera_sensor_get();
    // initial sensors are flipped vertically and colors are a bit saturated
    if (s->id.PID == OV3660_PID) {
      s->set_vflip(s, 1); // flip it back
      s->set_brightness(s, 1); // up the brightness just a bit
      s->set_saturation(s, 0); // lower the saturation
    }

#if defined(CAMERA_MODEL_M5STACK_WIDE)
s->set_vflip(s, 1);
s->set_hmirror(s, 1);
#elif defined(CAMERA_MODEL_ESP_EYE)
s->set_vflip(s, 1);
s->set_hmirror(s, 1);
s->set_awb_gain(s, 1);
#endif

    is_initialised = true;
    return true;
}

/**
* @brief      Stop streaming of sensor data
  */
  void ei_camera_deinit(void) {

  //deinitialize the camera
  esp_err_t err = esp_camera_deinit();

  if (err != ESP_OK)
  {
  ei_printf("Camera deinit failed\n");
  return;
  }

  is_initialised = false;
  return;
  }


/**
* @brief      Capture, rescale and crop image
*
* @param[in]  img_width     width of output image
* @param[in]  img_height    height of output image
* @param[in]  out_buf       pointer to store output image, NULL may be used
*                           if ei_camera_frame_buffer is to be used for capture and resize/cropping.
*
* @retval     false if not initialised, image captured, rescaled or cropped failed
*
*/
bool ei_camera_capture(uint32_t img_width, uint32_t img_height, uint8_t *out_buf) {
bool do_resize = false;

    if (!is_initialised) {
        ei_printf("ERR: Camera is not initialized\r\n");
        return false;
    }

    camera_fb_t *fb = esp_camera_fb_get();

    if (!fb) {
        ei_printf("Camera capture failed\n");
        return false;
    }

bool converted = fmt2rgb888(fb->buf, fb->len, PIXFORMAT_JPEG, snapshot_buf);

esp_camera_fb_return(fb);

if(!converted){
ei_printf("Conversion failed\n");
return false;
}

    if ((img_width != EI_CAMERA_RAW_FRAME_BUFFER_COLS)
        || (img_height != EI_CAMERA_RAW_FRAME_BUFFER_ROWS)) {
        do_resize = true;
    }

    if (do_resize) {
        ei::image::processing::crop_and_interpolate_rgb888(
        out_buf,
        EI_CAMERA_RAW_FRAME_BUFFER_COLS,
        EI_CAMERA_RAW_FRAME_BUFFER_ROWS,
        out_buf,
        img_width,
        img_height);
    }


    return true;
}

static int ei_camera_get_data(size_t offset, size_t length, float *out_ptr)
{
// we already have a RGB888 buffer, so recalculate offset into pixel index
size_t pixel_ix = offset * 3;
size_t pixels_left = length;
size_t out_ptr_ix = 0;

    while (pixels_left != 0) {
        // Swap BGR to RGB here
        // due to https://github.com/espressif/esp32-camera/issues/379
        out_ptr[out_ptr_ix] = (snapshot_buf[pixel_ix + 2] << 16) + (snapshot_buf[pixel_ix + 1] << 8) + snapshot_buf[pixel_ix];

        // go to the next pixel
        out_ptr_ix++;
        pixel_ix+=3;
        pixels_left--;
    }
    // and done!
    return 0;
}

#if !defined(EI_CLASSIFIER_SENSOR) || EI_CLASSIFIER_SENSOR != EI_CLASSIFIER_SENSOR_CAMERA
#error "Invalid model for current sensor"
#endif
