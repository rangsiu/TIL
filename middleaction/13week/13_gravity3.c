#include <stdio.h>
//미해결 문제 계속 F7777777로서 의도된 결과가 안 나옴.
unsigned int apply_bit_shift_rule(unsigned int input_num) {
    unsigned int result = 0;
    int move[32] = {0};  // 각 비트 이동 여부 저장

    // 최하위 비트(0번)는 이동하지 않음
    move[0] = 0;

    // 0번부터 31번까지 순서대로 이동 여부 계산 (연쇄 적용)
    for (int i = 1; i < 32; i++) {
        unsigned int right_bit_val = (input_num >> (i - 1)) & 1;

        if (right_bit_val == 0) {
            move[i] = 1;           // 우측 비트가 0 → 이동
        } else {
            move[i] = move[i - 1]; // 우측 비트가 1 → 우측 비트 이동 여부 따라감
        }
    }

    // 최종 결과 계산
    for (int i = 31; i >= 0; i--) {
        if (i > 0 && move[i]) {
            result |= (1 << (i - 1));  // 이동한 비트는 오른쪽으로
        } else {
            result |= (input_num & (1 << i)); // 이동하지 않으면 원래 위치
        }
    }

    return result;
}

int main() {
    unsigned int input_num;

    if (scanf("%X", &input_num) != 1) {
        return 1;
    }

    unsigned int result = apply_bit_shift_rule(input_num);

    printf("%X\n", result);  // 16진수 대문자 출력

    return 0;
}
//왜 자꾸 7FFFFFFF 나옴? 이해가 안 됨