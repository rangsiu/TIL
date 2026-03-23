//
// Created by 황시우 on 26. 1. 13..
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand 필요
#include <time.h> //seed srand time need

int gamble();
int main() {
    srand((unsigned)time(NULL));

    //다른 형태 고민해보기;
    int user[3], com[3];//배열 초기화
    int sum_user=0;
    int sum_com=0;
    for (int i=0; i<3; i++) {
        user[i]=gamble();
        sum_user+=user[i];
    }
    for (int i=0; i<3; i++) {
        com[i]=gamble();
        sum_com+=com[i];
    }

    printf("사용자 주사위= (%d %d %d)=%d\n", user[0], user[1], user[2], sum_user);
    printf("컴퓨터 주사위= (%d %d %d)=%d\n", com[0], com[1], com[2], sum_com);
    if (sum_user>sum_com) {
        printf("사용자 승리");
    }
    else if (sum_com>sum_user) {
        printf("컴퓨터 승리");
    }
    else {
        printf("비겼습니다");
    }

        ;//주사위를 3번 던져야 하니까.. 변수 총 6개 작성법 or 배열 작성
}

int gamble() {
    return 1+(rand()%6);//1~6
}