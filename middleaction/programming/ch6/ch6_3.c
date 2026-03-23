//
// Created by 황시우 on 26. 1. 8..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int com, me;

    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");

    com = (rand() % 3 + 1);//stdlib 사용할 것. 랜덤 값에 따라서...
    scanf("%d", &me);

    if (com == 1) {
        printf("컴퓨터는 가위를 선택하였습니다.\n");
        if (me == 1) {
            printf("비겼습니다.");
        }
        else if (me == 3) {
            printf("컴퓨터가 이겼습니다.");//가위로 이김
        }
        else {
            printf("사용자가 이겼습니다.");//주먹으로 이김
        }
    }

    else if (com == 2) {
        printf("컴퓨터는 바위를 선택하였습니다.\n");
        if (me == 2) {
            printf("비겼습니다.");
        }
        else if (me == 1) {
            printf("컴퓨터가 이겼습니다.");//주먹으로 이김
        }
        else {
            printf("사용자가 이겼습니다.");//보로 이김
        }
    }

    else {
        printf("컴퓨터는 보를 선택하였습니다.\n");
        if (me == 3) {
            printf("비겼습니다.");
        }
        else if (me == 2) {
            printf("컴퓨터가 이겼습니다.");//보로 이김
        }
        else {
            printf("사용자가 이겼습니다.");//가위로 이김
        }
    }

