//
// Created by 황시우 on 26. 1. 7..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int height, age;

    scanf("%d %d", &height, &age);
    printf("키를 입력하시오(cm): %d", height);
    printf("나이를 입력하시오: %d", age);

    if(height>=140 && age>=10) {
        printf("타도 좋습니다");
    }
    else {
        printf("죄송합니다");
    }
}