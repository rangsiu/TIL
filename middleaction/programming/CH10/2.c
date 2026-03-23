
//최대값, 최소값 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand((unsigned)time(NULL));
    int a[10] = { 0 };//요기 메인에서 지정, 0으로 초기화하는 거 습관으로 두기 아무리 scanf로 입력받는다 하더라도. 개념에 충실.
    //scanf로 입력받기 전에는 여기엔 쓰레기값만 있음.
    int min, max;
    for (int i = 0; i < 10; i++) {
        a[i] = rand();
        //이 때 최소, 최대를 반복문 안에서 지정??

    }

    min = a[0];
    max = a[0];
    //아니 따로 반복문 하나 더!
    for (int i = 0; i < 10; i++) {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("최대값은 %d\n", max);
    printf("최소값은 %d", min);

}
