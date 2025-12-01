//
// Created by 황시우 on 25. 11. 23..
//예준이도 실패했었던 어려운 문제
//문자열 9개 abc(3)  d ef(4)..이 있으면 ad어쩌구b 어쩌구ce어쩌구 이렇게 세로로 순회하며 출력
//대체 문자열 열대로 어떻게 접근

#include <stdio.h>

void print_strings(char *arr)
{
    char **ptr = (char **)NULL;
    char *ptrs[9] = {0};
    int i;
    // 이 위로 수정 금지

    //시작 주소 ptrs[i]에 저장 반드시
    for (i=0; i<9; i++) {
        ptrs[i]=arr+(100*i);//1, arr+100 다음 문자열의 시작 주소
    }

    for (i=0; i<100; i++) {
        ptr=(char**)(ptrs[0]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[1]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[2]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[3]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[4]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[5]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[6]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[7]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }

        ptr=(char**)(ptrs[8]+i);
        if ( *((char*)ptr)!=0) {
            printf("%c", *((char*)ptr)); //ptr 별 두 개 없애기..
        }
    }

    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    char data[3][3][100];
    for (int i = 0; i < 900; i++)
        data[0][0][i] = 'x';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf(" %[^\n]", data[i][j]);

    print_strings((char *)data);

    return 0;
}