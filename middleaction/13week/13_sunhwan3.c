//
// Created by 황시우 on 25. 11. 29
// 순환문제 3

#include <stdio.h>

int countbits (unsigned int n) {
    int count=0;

    for (int i=0; i<32; i++) {
        if ((n>>i)&1) {
            count++;
        }
    }
    return count;
}

int main() {

    int K;
    unsigned int arr[100];
    scanf("%d",&K);

    int idx_current=0;//현재 인덱스
    int move;

    //배열 입력
    for (int i = 0; i < 100; i++) {
        scanf("%X", &arr[i]);
    }

    for (int i=0; i<K; i++) {
        unsigned int val= arr[idx_current];
        int ones=countbits(val);
        int zeros=32-ones;
        move=ones-zeros;

        //이동
        idx_current=idx_current+move;

        //0~99으로 modular
        idx_current=idx_current%100;

        if (idx_current<0) {
            idx_current+=100;
        }
        //각 한 번 할때마다 current idx 출력
        printf("%d ", idx_current);
    }
}