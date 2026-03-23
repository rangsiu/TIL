//
// Created by 황시우 on 26. 1. 13..
//
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

double cal_area(double radius);

int main() {

    double radius;
    printf("원의 반지름을 입력하시오:");
    scanf("%lf", &radius);
    printf("원의 면적은 %lf입니다", cal_area(radius));
}


double cal_area(double radius) {

    return PI*radius*radius;
}