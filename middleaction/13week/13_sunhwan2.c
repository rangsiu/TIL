//
// Created by 황시우 on 25. 11. 30..
//
#include <stdio.h>

int main() {
    int N, K;
    char arr[100];
    scanf("%d %d",&N,&K);

    int idx_curr=0;
    int move;// 이동할만큼의 변수

    //char 배열에 정수.. 이 부분 생각해보기
    for (int i=0; i<N; i++) {
        int val;
        scanf("%d", &val);
        arr[i]=(char)val;
    }
    //생각해보기

    //이동 시작
    for (int j=0; j<K; j++) {
        move=arr[idx_curr];

        idx_curr+=move;

        idx_curr=idx_curr%N;

        //음수 다루기
        if (idx_curr<0) {
            idx_curr+=N;
        }
        printf("%d ", idx_curr);
    }
}