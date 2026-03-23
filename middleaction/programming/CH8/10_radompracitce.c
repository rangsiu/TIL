//
// Created by 황시우 on 26. 1. 13..
//난수 발생기 연습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand 필요
#include <time.h> //seed srand time need

int radiant() {

    return (10+rand()%81);
}

int main() {
    srand((unsigned)time(NULL)); //이걸 여기다 넣어야 하나? 메인에 써도 무방할 듯 예시를 보니까
    for (int i=0; i<10; i++) {
        printf("%d ",radiant() );
    }
}