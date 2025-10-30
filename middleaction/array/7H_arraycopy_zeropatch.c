//
// Created by 황시우 on 25. 10. 19..
// 2차원 배열을 다른 형태의 배열로 복사하는 알고리즘,
// 18번 줄캐스팅이 매우 중요.
#include <stdio.h>
//아 이거를 하나의 배열로 정의해서 풀었다 이말인가... 1차 배열 이용해서 카피하는 게 더 쉬울테니까..
int main() {
    unsigned int A[3][4];
    unsigned int output_arr[5][6] = {0};

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            scanf("%u", &A[i][j]);
        }
    }
    //data copy
for (int k=0; k<12; k++) { //12로 수정
    int i=k / 6; //6이어야 함.
    int j=k % 6;
    output_arr[i][j]=*((unsigned int*)A + k);
}



    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++) {
            printf("%u ",output_arr[i][j]);
        }
        printf("\n");
    }
}
