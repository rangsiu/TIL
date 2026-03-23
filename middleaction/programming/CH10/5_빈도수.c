//
// Created by 황시우 on 26. 1. 14..
// 가장 많이 나온 수 찾기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    int max, id_m, freq[10] = { 0 }; //빈도를 저장할 배열
    //100개의 수를 하나의 배열에 저장해서, 배열에서 빈도수를 조사하면 되겠지 뭐
    for (int i = 0; i < 100; i++) {//100번 시행
        ++freq[rand() % 10];//해당하는 배열요소의 빈도수 증가.
    }

    //최댓값 갱신, 0부터 9까지 최댓값인 인덱스 번호 찾기
    max = freq[0];
    for (int i = 0; i < 10; i++) {
        if (max < freq[i]) {
            max = freq[i];
            id_m = i;
        }
    }
    //반복문 끝날 때 인덱스를 받을 수는 없나
    printf("가장 많이 나온 수=%d", id_m);


}
