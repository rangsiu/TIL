//
// Created by 황시우 on 25. 10. 19..
//
#include <stdio.h>
int main() {
    unsigned int A[5][5];
    unsigned int B[3][8];
    int N, index_x, index_y;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d ", &A[i][j]);

        }
    }
    scnaf("%d", &N);

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (N==A[i][j]) {
                index_x=i;
                index_y=j;
            }
        }
    }


}