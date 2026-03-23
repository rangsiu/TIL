//
// Created by 황시우 on 26. 1. 5..
// 윤년 판단, 지긋지긋했었다... 미친 문제
/*유년의 족ㄴ: 연도가 4로 나누어 떨어짐
 * 100으론 나누어 안 떨어짐
 *400으로는 나누어 떨어짐
 **/

#include <stdio.h>

int main() {

    int year;
    scanf("%d", &year);

    if ((year%4==0)&& (year%100!=0)&&(year%400==0)) {
        printf("yoon year");
    }
    else {
        printf("not yoon year");
    }
}