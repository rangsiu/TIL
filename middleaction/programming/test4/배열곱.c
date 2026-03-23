//
// Created by 황시우 on 26. 2. 11..
//
#include <stdio.h>

int main(){
    int a[1][2];
    int b[2][3];

    for(int i=0; i<1; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }




            for(int j=0; j<3; j++){
        printf("%d ", a[0][0]*b[0][j]+a[0][1]*b[1][j]);
        }



}