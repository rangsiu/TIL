//
// Created by 황시우 on 25. 12. 26..
//if-else로 홀수인지 짝수인지 말해주는 프로그램 작성

#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num%2) {
        printf("%d is odd", num);//num%2는 0 또는 1임.
    }
    else {
        printf("%d is even", num);
    }
}