//
// Created by 황시우 on 26. 1. 8..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    float x,y_minus,y_plus;
    printf("x의 값을 입력하시오: ");
    scanf("%f", &x);
    y_minus=x*x-9*x+2;
    y_plus=7*x+2;

    if (x>=0) {
        printf("f(x)의 값은 %f입니다",y_plus);
    }
    else {
        printf("f(x)의 값은 %f입니다", y_minus);
    }
}