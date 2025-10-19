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


    scanf("%X", &data);
    scanf("%s %d", command_type, &N);

    unsigned char mask = (1 << N);//N이 입력된 상태여야 100점! N 선언 전에 두면 30점 크나큰 오류!

    if (N >= 0 && N <= 7) {
        //N 조건 씌워주기
        if (command_type[0] == 's') {
            data = data | mask; // data는 이제 0xAB
            // set 0 연산
            // 8비트 정수(unsigned char)를 16진수(X)로 올바르게 출력
            printf("%X", data); // 출력: AB (02를 사용해 2자리로 출력)
        }
        else if(command_type[0] == 'c') {
            data = data &(~mask); // data는 이제 0xAB
            // set 0 연산
            // 8비트 정수(unsigned char)를 16진수(X)로 올바르게 출력
            printf("%X", data); // 출력: AB %X로 출력
        }
    }


    return 0;
}