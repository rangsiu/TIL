//
// Created by 황시우 on 26. 1. 13..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f) {
    return (int)(f+0.5);//반환형이 int이다. F+0.5는 여전히 float이므로, int 처리 앞에 괄호로 반드시 하기.
}

int main() {
    double f;
    printf("실수를 입력하시오:");
    scanf("%lf", &f);

    printf("반올림한 값은 %d입니다", round(f));
}
