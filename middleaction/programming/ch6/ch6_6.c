//
// Created by 황시우 on 26. 1. 7..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {


    char munja=getchar();
    //모음 중 하나 반환하는 getchar()?
    //모음이 몇 개지... a e i o u 5개임.
    //switch 사용할 것.

    switch (munja) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("모음입니다");
            break;
        default:
            printf("자음입니다");
    }
}