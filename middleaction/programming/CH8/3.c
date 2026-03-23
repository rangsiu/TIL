//
// Created by 황시우 on 26. 1. 13..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double a, double b);//parameter 포함해야 함.

int main() {
    double a,b;
    printf("실수를 입력하시오:\n");
    scanf("%lf %lf", &a, &b);//double: %lf를 사용해야 한다. float: %f를 사용해야 한다.

    printf("큰 수는 %f입니다", get_bigger(a,b));


}

double get_bigger(double a, double b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}
