//
// Created by 황시우 on 26. 2. 17..
//
#include <stdio.h>

int main() {
    //실전 때 풀었는데 왜 틀렸는지 몰랐던 문제임.

    int a[2][100];
    int b[100][4];
    int c[2][4]={0,};

    for (int i=0; i<2; i++) {
        for (int j=0; j<100; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i=0; i<100; i++) {
        for (int j=0; j<4; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            //2x4 만들어놓고
            for (int k=0; k<100; k++) {
                c[i][j]+=a[i][k]*b[k][j];
            }

        }
    }

    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }



}