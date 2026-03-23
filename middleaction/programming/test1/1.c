//
// Created by 황시우 on 26. 1. 16..
//동적으로 문자열 할당하기 printf, scanf 건드릴 수 없어서 30점 획득
//포인터여야 됨

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    char* str=(char*)malloc(N*sizeof(char)); //오 드디어 되었다 둘의 형이 일치되었어.
    //요기가 문제는 아니네네
    //그리고 반드시 양변이 포인터여야 해.
    //드디어 30점, fgets 쓰면 되려나?
    scanf("%s", str);
    //이러면 공백도 포함하나??
    //ptr이 왜 인티저야? 여기도 인티저와 포인터의 비교 실패. 개념 매우 부족.
    //최대 2000자까지 가능한 문자열 공간 할당.
    //  char str[100][200];

    // fgets(str, sizeof(str), stdin);, 왠지 모르지만 호환 안 됨. 5점 됨됨
    printf("%s", str);//printf에서 str도 ok

    free(str);
    //scanf, printf를 더 이상 건들 수 없다.
}