//
// Created by 황시우 on 25. 11. 9..
//새로운 문제, 이따가 이해하기
//개선점 2: unsigned로 모두 통일하니 5에서 100점 됨! 0~2^23을 담아야 하니가

#include <stdio.h>
int main() {

    int input[10][10];
    int output[8][8];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <10; j++) {
            scanf("%d", &input[i][j]);
        }
    }

    for (int k = 0; k < 8; k++) {
        for (int l = 0; l < 8; l++) {

//input배열 output으로 옮기기
            int max=0;

            //k~k+2, j~j+2
            for (int i=k; i<=k+2; i++) {
                for (int j=l; j<=l+2; j++) {
                    if (input[i][j]>max) {
                        max=input[i][j];
                    }
                }
            }
            //(k,l) 위치에 다시 저장
            output[k][l]=max;
        }
    }
//결과 출력
    for (int k=0; k<8; k++) {
        for (int l=0; l<8; l++) {
            printf("%d", output[k][l]);

            //마지막 원소가 아니라면 공백
            /*if (k<8-1) {//치명적 오류k가 아니라 l로..!
                printf(" ");//""가 아니라 " "
            }*/

            if (l<8-1) {//k가 아니라 l로..!
                printf(" ");//""가 아니라 " "
            }
        }
            printf("\n");
    }
    return 0;
}