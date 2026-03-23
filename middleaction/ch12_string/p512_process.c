//
// Created by 황시우 on 26. 1. 24..
// 검사하여, 소문자이면 대문자로 바꿔주는 프로그램

#include <stdio.h>
#include <ctype.h> //정수 반환형 함수를 사용하는 데 필수임.

int main() {
    int c=getchar();

    if (c!=EOF) {
        if (islower(c)) {
            //소문자이면
            c=toupper(c);
        }
        //printf("%c", c);//이것도 되나? 된다!
        putchar(c);
    }
}