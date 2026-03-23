//
// Created by 황시우 on 26. 1. 8..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char word;
    word=getchar();

    if (word=='R'|| word=='r') {
        printf("Rectangle");
    }
    else if (word=='C'||word=='c') {
        printf("Circle");
    }
    else if (word=='T' || word=='t') {
        printf("Triangle");
    }
    else {
        printf("Unknown");
    }
}