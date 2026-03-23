//
// Created by 황시우 on 26. 1. 8..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int weight,height, stw;
    printf("체중과 키를 입력하시오: ");
    scanf("%d %d", &weight, &height);

    stw=(height-100)*0.9;

    if (stw<weight) {
        printf("과체중입니다");
    }
    else if (stw==weight) {
        printf("표준입니다");
    }
    else {
        printf("저체중입니다");
    }
}