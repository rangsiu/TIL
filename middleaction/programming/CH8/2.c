//
// Created by 황시우 on 26. 1. 12..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m) {

    if (n%m==0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    //반환값에 따라 배수 여부를 출력하자
    int n, m; //main에서 초기화하는 게 가독성 높음
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &m);

    if (is_multiple(n,m)) { //argument엔 자료형 쓰면 안 됨.
        printf("n은 m의 배수입니다");
    }else {
        printf("n은 m의 배수가 아닙니다");
    }


}