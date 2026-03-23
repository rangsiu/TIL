//
// Created by 황시우 on 26. 1. 12..
//
//3개의 함수를 작성하자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int를 받기 때문에 float를 입력으로 받는 math.h를 사용하지 말자

int even(int n);
int absolute(int n);
int sign(int n);

int main() {
    int n,res1,res2,res3;
    //반환값을 담을 변수 선언함
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    res1=even(n);
    printf("even()의 결과: %d\n", res1);

    res2=absolute(n);
    printf("absolute()의 결과: %d\n", res2);

    res3=sign(n);
    printf("sign()의 결과: %d", res3);
}

int even(int n) {
    if (n % 2) {
        return 0;
    }
    else {
        return 1;
    }
}

int absolute(int n) {
    if (n >= 0) {
        return n;
    }
    else {
        return -n;
    }
}

int sign(int n) {
    if (n < 0) {
        return -1;
    }
    else if (n == 0) {
        return 0;
    }
    else {
        return 1;
    }
}
