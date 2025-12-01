//
// 13th  정답자 7명
//13번쨰 퀴즈 왜 못 풀었을까

#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,M,i,j;
    //바보야 이미 초기화했는데 왜 굳이선언까지 해unsigned int *a;

    scanf("%d %d", &N,&M);

    //N개의 행을 저장. 안에 * 조심
    unsigned int **a=(unsigned int**)malloc(N*sizeof(*a));
    //동일: unsigned int **a=(unsigned int**)malloc(N*sizeof(unsigned int*));
    //배열을 동적할당 받는 문제 있었던 거 같은디

    for (i=0; i<N; i++) {
        a[i]=(unsigned int*)malloc(M*sizeof(*a[i]));
        //동일: a[i]=(unsigned int*)malloc(M*sizeof(unsigned int));
    }
    //int가 아니라 unsigned int로 해야 일치하는 구나 게다가 8비트래 이거 재주니예준이들이 말한 거야
    //그래서 7명밖에 못 맞춘 거구나.

    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            scanf("%u", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%u ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        free(a[i]);//행 해제
    }

    free(a);
}
//why runtime error?
