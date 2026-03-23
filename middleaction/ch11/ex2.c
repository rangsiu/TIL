//
// Created by 황시우 on 26. 1. 20..
// 포인터가 가리키는 변수의 안쪽 값을 바꿀 수 있어

//
// Created by 황시우 on 26. 1. 20..
//본격적 포인터 학습 시작

#include  <stdio.h>

int main() {

    int i=3000;
    int *p;

    p=&i; // i는 int야

    *p=6974;
    printf("%d", i);
}