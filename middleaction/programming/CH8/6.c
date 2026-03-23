//
// Created by 황시우 on 26. 1. 13..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//이번에는 void로 함수 실행만으로 출력하게 해보자.
//새로운 방법!! int return 이 아니게 해보자

void is_leap(int year) {
    if ((year%4==0) && (year%100!=0) && (year%400==0)) {
        printf("%d년은 윤년입니다", year);
    }
    else {
        printf("%d년은 윤년이 아닙니다", year);
    }
}

int main() {
    int year;
    printf("연도를 입력하시오:");
    scanf("%d", &year);

    is_leap(year);
}
