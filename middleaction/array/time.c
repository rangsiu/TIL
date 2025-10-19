#include <stdio.h>

#define MAX_N 100 // 최대 시간 개수

// 함수 1: "hh:mm:ss" 문자열을 총 초(second)로 변환 (sscanf 사용)
// stdio.h의 sscanf는 문자열에서 형식화된 입력을 읽습니다.
int time_to_seconds(const char *time_str) {
    int h, m, s;
    sscanf(time_str, "%d:%d:%d", &h, &m, &s);
    return (h * 3600) + (m * 60) + s;
}

// 함수 2: 총 초(second)를 "hh:mm:ss" 형식으로 변환 (sprintf 사용)
// stdio.h의 sprintf는 형식화된 출력을 문자열 버퍼에 씁니다.
void seconds_to_time(int total_seconds, char *output_str) {
    int h, m, s;
    h = total_seconds / 3600;
    m = (total_seconds % 3600) / 60;
    s = total_seconds % 60;

    
    sprintf(output_str, "%02d:%02d:%02d", h, m, s);
}

int main() {
    int N;
    // N개의 시간을 초 단위 정수로 저장할 배열
    int seconds_array[MAX_N];

    scanf("%d", &N);
  
    // 입력 버퍼의 개행 문자 처리
    while (getchar() != '\n');

   
    char time_str[10]; // 임시 입력 버퍼: "hh:mm:ss\0"
    for (int i = 0; i < N; i++) {
        // scanf로 시간 문자열을 임시로 읽어옵니다.
     
        scanf("%8s", time_str);
        seconds_array[i] = time_to_seconds(time_str);
       
    }

    // 버블 정렬을 사용하여 초 단위 정수 배열을 정렬
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            // 정수 값만 비교하고 교환합니다.
            if (seconds_array[j] > seconds_array[j+1]) {
                // int 값 교환 (문자열 교환 불필요)
                int temp = seconds_array[j];
                seconds_array[j] = seconds_array[j+1];
                seconds_array[j+1] = temp;
            }
        }
    }

    // 정렬된 초 값을 다시 "hh:mm:ss" 형식으로 변환하여 출력
    
    char output_time_str[9]; // 출력용 임시 문자열 버퍼
    for (int i = 0; i < N; i++) {
        seconds_to_time(seconds_array[i], output_time_str);
        printf("%s\n", output_time_str);
    }

    return 0;
}