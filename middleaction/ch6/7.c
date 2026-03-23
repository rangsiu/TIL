//
// Created by 황시우 on 26. 1. 5..
//입력받는 문자를 구분해보자. getchar 함수

#include <stdio.h>

int main() {
    char ch;

    ch= getchar();

    //문자의 아스키코드값 확인

    if (ch>='A'&& ch<='Z') {
        printf("BIG");
    }

    else if (ch>='a'&&ch<='z') {
        printf("small");
    }

    else if (ch>='0'&& ch<='9') {
        printf("number");
    }
    else {
        printf("something else");
    }
}