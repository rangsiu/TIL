//
// Created by 황시우 on 26. 1. 20..
//본격적 포인터 학습 시작

#include  <stdio.h>

int main() {

    int i=3000;
    int *p;

    p=&i; // i는 int야

    printf("%p %p\n", p, &i);
    //p와 &i는 같지
    printf("%d %d", i, *p);
    //*p는 i의 값과 같지
}