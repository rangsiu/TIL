//
// Created by 황시우 on 25. 10. 19..
// 왜 오답 95인지 모르겠음. 5x5배열이 나중에 3x8배열로 변환됨.
// N을 입력받을 때, 25를 입력받을 수는 없음.
#include <stdio.h>
int main() {
    unsigned int A[5][5];
    unsigned int output_arr[3][8];
    int N;
    int ix=-1;
    int iy=-1;

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%u ", &A[i][j]);
        }
    }


    scanf("%d", &N);

    for (int i=0; i<5; i++) {

        for (int j=0; j<5; j++) {
            if (N==A[i][j]) {
                ix=i;
                iy=j;
                break;
            }
        }

        if (ix!=-1) {
            break;
        }
    }
    //i,j 저장

    for (int k=0; k<24; k++) {//25가 아니라 24... 인덱스 0~23, 24개만 사용.
        int i=k/8;
        int j=k % 8;//7이 아니라 8을 쓰기

        output_arr[i][j]=*((unsigned int*)A + k);
    }
    // 변형된 배열 완성

    //up
    if (ix - 1 >= 0) {
        printf("%d ", A[ix - 1][iy]);
    } else {
        printf("-1 ");//-1에도 공백 추가
    }


    //down
    if (ix + 1< 5) {
       printf("%d ", A[ix + 1][iy]);
    } else {
        printf("-1 ");
    }
    //left
    unsigned int mystery=A[ix][iy-1];
    if (iy - 1 >= 0) {
        printf("%d ", A[ix][iy-1]);
    } else {
        printf("-1 ");
    }

    if (iy + 1 < 5) {
        printf("%d", A[ix][iy+1]);
    } else {
        printf("-1");
    }
    printf("\n");

    //up
    if (ix - 1 >= 0) {
        printf("%u ", output_arr[ix-1][iy]);
    } else {
        printf("-1 ");
    }
    //down
    if (ix + 1 < 3) {
        printf("%u ", output_arr[ix+1][iy]);
    } else {
        printf("-1 ");
    }
    //left
    if (iy - 1 >= 0) {
        printf("%u ", output_arr[ix][iy-1]);
    } else {
        printf("-1 ");
    }

    if (iy + 1 <8) {
        printf("%u ", output_arr[ix][iy+1]);
    } else {
        printf("-1 ");
    }



}