
// Created by 황시우 on 25. 11. 16
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 위로 수정 금지

int my_strcmp(char *s1, char *s2) {
    while (*s1!=0 && *s1==*s2) {
        s1++;
        s2++;//null 만날때 그리고 문자 같아질 때까지 다음으로 이동.
    }

    return (int)*s1-(int)*s2;
    // 잘못된 표현: return (int*)*s1-(int*)s2; //s1이 뒤에 있어야 하는 거면 양수
}
// void sort_parr(char *arr[10][100], char *parr[10]) { //배열과 parr쓰기. 중요! CHAR*가 아니라 CHAR *ARR!!! 변수에!
//이 함수 용법 잘 기억하기, 그냥 배열과 *parr을 왜 쓰는지를 기억.
    void sort_parr(char arr[10][100], char *parr[10]) {
    for (int i = 0; i < 10; i++) {
        parr[i] = arr[i]; //arr의 것을 parr로 옮기는 거.
    }
    //버블정렬 블록
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            int swapon=my_strcmp(parr[j], parr[j + 1]);
            if (swapon>0) {
                // 두 포인터의 위치를 교환
                char *temp = parr[j];
                parr[j] = parr[j + 1];
                parr[j + 1] = temp;
            }
        }
    }
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    char arr[10][100] = {0};
    char *parr[10] = {0};
    for (size_t i = 0; i < 10; i++)
        scanf("%s", arr[i]);
    //arr에 내용이 있음.

    sort_parr(arr, parr);

    if (parr[0] < arr[0] || parr[0] > arr[9])
        return -1;
    for (size_t i = 0; i < 10; i++)
        printf("%s ", parr[i]);
    printf("\n");
    for (size_t i = 0; i < 10; i++)
        printf("%s ", arr[i]);

    return 0;
}