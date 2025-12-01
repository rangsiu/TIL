//
// Created by 황시우 on 25. 11. 15..
//

#include <stdio.h>

int main() {

    int I;
    scanf("%d", &I);

    printf("%X", 0x1000+2*I);
    //일차원 배열의 메모리주소는 인티저끼리
    //이차원 배열의 메모리주소는 큰 덩어리끼리가 아니다.
}