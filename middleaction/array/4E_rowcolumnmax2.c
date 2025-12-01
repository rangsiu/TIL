//
// Created by 황시우 on 25. 10. 13..
//4th quiz, quest E
//행별로 최댓값을 찾아서 저장하기.
//

#include <stdio.h>
int main() {
    int N,M;
    scanf("%d %d", &N, &M);

    int A[100][100];
    int col_max[100];

    int index_max[100];
    //위 처럼 정의해도 되나?, 그럼 M까지만 쓰면 되네 그치?
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    //now, maximum algorithm is mine
    //열마다 이야기해야 함, 140 528 397 1(00) 4(10) 0(20) / 01) 11) 21)
    for (int j=0; j<M; j++) {
        for (int i=0; i<N; i++) {
            col_max[j]=A[0][j];
            if (col_max[j]<A[i][j]) {
                col_max[j]=A[i][j];
                //maximum renewed
            }
        }
    }

    for (int j=0; j<M; j++) {
        printf("%d ", col_max[j]);
    }
    return 0;
}
//결과가 이상해 다시 보기.


