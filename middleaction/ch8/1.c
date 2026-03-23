//
// Created by 황시우 on 26. 1. 11..
//
//생일 축하 함수 실행
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void happy(int age) {
    //입력받은 age를 가지고 이제 어떻게 할 것인지
    printf("생일 축하합니다!");
    printf("사랑하는 시우의 %d번째 생일을 축하합니다", age);//age를 안 썼네 ㅋㅋ
    //return 없음.
}
int main() {
    int age;
    scanf("%d", &age);//age는 main에서 입력받음.
    happy(age);
    return 0;
}
//사랑하는 시우의 309963712번째 생일을 축하합니다 왜 이렇게 나오지?