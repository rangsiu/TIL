//
// Created by 황시우 on 26. 1. 23..
// 성공

#include <stdio.h>


int main(){

    int A[10][10]={0};

    int final[7][7]={0};


    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d",&A[i][j]);
        }
    }

    //최댓값 구하기, 배열 복사하기 왜 못해?
    //두 과정을 나눠야 하나?
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            int max=A[i][j];//시작좌표.
            for(int k=i; k<i+4; k++){
                for(int l=j; l<j+4; l++){
                    if(max<A[k][l]){
                        max=A[k][l];
                    }
                }
            }
            final[i][j]=max; //yeah!!!
        }
    }

    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            printf("%d ", final[i][j]);
        }
        printf("\n");
    }




}