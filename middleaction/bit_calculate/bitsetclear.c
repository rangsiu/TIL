//
// Created by 황시우 on 25. 10. 19
//
//출력: X형식
//

#include <stdio.h>

int main() {
    char command_type[10];
    unsigned char data;
    int N;
    unsigned char mask = (1 << N);

    scanf("%s %d", command_type, &N);

    if (N >= 0 && N <= 7) {
        if (command_type[0] == 's') {
            data = data | mask; // data는 이제 0xAB
            // set 0 연산
            // 8비트 정수(unsigned char)를 16진수(X)로 올바르게 출력
            printf("결과: %02X\n", data); // 출력: AB (02를 사용해 2자리로 출력)
        }


    }
    return 0;
}