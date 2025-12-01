//
// Created by 황시우 on 25. 11. 16..
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int *ptr;
    int i;
    // 이 위로 수정 금지

    //size 할당
    ptr=(unsigned int*)malloc(3*sizeof(unsigned int));

    //입력 포인터
    for (i=0; i<3; i++) {
        scanf("%X", &ptr[i]);//대문자 16진수 입력 조건 반영
    }

    //출력
    for (i=0; i<3; i++) {
        printf("%u ", ptr[i]);//unsigned니까 u를 출력
    }

    free(ptr);
    // 이 아래로 수정 금지

    return 0;
}