//
// Created by 황시우 on 26. 1. 13..
// 십진수 받아서 상위자리수 반환

//while 써서 양수일 때까지 나누게 하는 거 하면 되겠다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_first_digit(int n) {
   while (n>0) {
       int digit;
       digit=n;
       n=n/10;
   }
    return digit;
}

int main() {
    int n;
    printf("정수를 입력하시오:");
    scanf("%d", &n);
    printf("가장 상위 자리수는 %d입니다", get_first_digit(n));

}