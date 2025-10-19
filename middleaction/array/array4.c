//
// Created by 황시우 on 25. 10. 19..
//
#include <stdio.h>
int main() {
    int N,M,K;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    scanf("%d %d %d", &N,&M,&K);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < N; i++) { // 결과 행렬 C의 행 인덱스 (0에서 N-1까지)
        for (int j = 0; j < K; j++) { // 결과 행렬 C의 열 인덱스 (0에서 K-1까지)
            C[i][j] = 0; // 초기화

            // A의 i번째 행과 B의 j번째 열의 내적 계산
            for (int l = 0; l < M; l++) { // 내적 계산 인덱스 (0에서 M-1까지)
                // C[i][j] += A[i][l] * B[l][j];
                C[i][j] = C[i][j] + (A[i][l] * B[l][j]);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n"); // 한 행 출력 후 줄 바꿈
    }

}