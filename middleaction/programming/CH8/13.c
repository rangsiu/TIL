//
// Created by 황시우 on 26. 1. 13..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include  <math.h>
double get_distance(double x1,double y1,double x2,double y2) {
    double dis=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return sqrt(dis); //dis 값이 double이어야 sqrt(math.h 함수)가 실행 가능.
}

int main() {
    double x1,x2,y1,y2;
    printf("첫 번쨰 점의 좌표를 입력하시오:\n");
    scanf("%lf %lf", &x1,&y1);
    printf("두 번쨰 점의 좌표를 입력하시오:\n");
    scanf("%lf %lf", &x2,&y2);
    printf("두 점 사이의 거리는 %f입니다", get_distance(x1,y1,x2,y2));//if printf에서 실수 double을 %f로 출력한다면..
}