//
// Created by 황시우 on 25. 10. 19..
// 내가 푼 것 아님!! 아파트 문제 개같이 귀찮지만 간단함. 종이로 디자인하기.
#include <stdio.h>

// 매크로 정의: 아파트 구조
#define NUM_BUILDINGS 3 // 동의 개수
#define NUM_FLOORS 3    // 층의 개수
#define NUM_HOUSES 3    // 호의 개수

// 함수 선언
void print_adjusted_bill(int total_bills[]);

int main(void) {
    // 전기 요금 저장 (3동 x 3층 x 3호)
    // bill[i][j][k]는 i+1동, j+1층, k+1호의 전기 요금
    int bills[NUM_BUILDINGS][NUM_FLOORS][NUM_HOUSES];

    // 동별 총 전기 요금 저장 (A, B, C 동 순서)
    int total_bills[NUM_BUILDINGS] = {0};

    // 1. 27가구의 전기 요금 입력 받기
    // 입력 예시: 1 2 3 ... 27

    for (int i = 0; i < NUM_BUILDINGS; i++) {
        for (int j = 0; j < NUM_FLOORS; j++) {
            for (int k = 0; k < NUM_HOUSES; k++) {
                // 각 가구의 요금을 입력받고
                scanf("%d", &bills[i][j][k]);
                // 해당 동의 총합에 누적
                total_bills[i] += bills[i][j][k];
            }
        }
    }

    // 2. 조정된 전기 요금 총합 계산 및 출력
    print_adjusted_bill(total_bills);

    return 0;
}


void print_adjusted_bill(int total_bills[]) {
    // 3. 최저/최고 총합 찾기
    int min_sum = total_bills[0];
    int max_sum = total_bills[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < NUM_BUILDINGS; i++) {
        if (total_bills[i] < min_sum) {
            min_sum = total_bills[i];
            min_index = i;
        }
        if (total_bills[i] > max_sum) {
            max_sum = total_bills[i];
            max_index = i;
        }
    }

    // 입력 조건에 따라 min_sum과 max_sum은 반드시 다릅니다.

    // 4. 정책에 따른 총 요금 조정 및 출력
    int adjusted_bills[NUM_BUILDINGS];

    for (int i = 0; i < NUM_BUILDINGS; i++) {
        if (i == min_index) {
            // 가장 낮은 총합을 가진 동: 50% 산정 (정수 나눗셈)
            // (총합 * 50) / 100 == 총합 / 2
            adjusted_bills[i] = total_bills[i] * 50 / 100;
        } else if (i == max_index) {
            // 가장 높은 총합을 가진 동: 150% 산정 (정수 나눗셈)
            // (총합 * 150) / 100
            adjusted_bills[i] = total_bills[i] * 150 / 100;
        } else {
            // 그 외 동: 변동 없음 (100%)
            adjusted_bills[i] = total_bills[i];
        }
    }

    // 5. 결과 출력 (A, B, C 동 순서대로 줄바꿈 구분)

    printf("%d\n", adjusted_bills[0]);
    printf("%d\n", adjusted_bills[1]);
    printf("%d\n", adjusted_bills[2]);
}