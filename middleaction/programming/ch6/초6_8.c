//
// Created by 황시우 on 26. 1. 8..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int time, age,money;

    printf("현재 시간과 나이를 입력하시오(시간 나이): ");
    scanf("%d %d", &time, &age);

    if (time<17) {
        if ((0<=age && age<=12)||(age>=65)) {
            money=25000;
        }
        else {
            money=34000;
        }
    }
    else {
        money=10000;
    }
    printf("요금은 %d원입니다", money);
}