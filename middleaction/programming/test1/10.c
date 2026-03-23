//
// Created by 황시우 on 26. 1. 16..
//이지

#include <stdio.h>

int main(){
    //lld로 바꿔볼까까 2^32는
    int a[4][4];
    //기억나지? 이거?
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%lld", &a[i][j]);
        }
    }

    for(int i=1; i<3; i++){
        for(int j=1; j<3; j++){
            a[i][j]=0;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
}