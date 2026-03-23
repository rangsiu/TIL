//
// Created by 황시우 on 26. 1. 13..
//
//math.h의 sin함수를 이용하여 값을 반환

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <stdio.h>
#include <math.h>

double sin_degree(double degree) {
    double rad;
    rad=(degree*PI)/180.0;//degree-> rad
    return sin(rad);//rad->sin값 반환
}

int main() {
    double degree;

    for (double degree=0; degree<=180.0; degree+=10){ //10도씩 증가하려면 어떻게 해야 할까 가장 뒤에는 degree가 증가한다고 쓴다
        //349 쪽 예제 참조해서 반복문 완성함.
        printf("sin(%lf)의 값은 %lf", degree, sin_degree(degree));
    }
}