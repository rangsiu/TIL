//
// Created by 황시우 on 25. 11. 21
// 그래비티 비트 동시에 이동.
#include <stdio.h>
unsigned int move_bits(unsigned int input_val) {
    unsigned int next_val = 0;


    for (int i = 0; i < 32; i++) {
        // 현재 비트의 값 (0 또는 1)
        unsigned int current_bit = (input_val >> i) & 1;
//새로운 next_val에 저장하는 게 훨 나음.

        if (current_bit == 0) {
            continue;
        }

        // 현재 비트가 1인 경우
        if (i == 0) {
            next_val |= (1 << i);
        }
        else
            {
            // 자신의 우측 비트 확인
            unsigned int right_bit = (input_val >> (i - 1)) & 1;

            if (right_bit == 0) {
                // 우측 비트가 0이면, 우측으로 이동
                // 다음 상태의 i-1 위치에 1을 설정
                next_val |= (1<< (i - 1));
            } else {
                // right_bit == 1
                next_val |= (1<< i);
            }
        }
    }

    return next_val;
}

int main() {
    unsigned int input_val;



   scanf("%X", &input_val);


    unsigned int result_val = move_bits(input_val);

    printf("%X\n", input_val);
    printf("%X", result_val);

    return 0;
}