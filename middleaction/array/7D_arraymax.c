//
// 7주차 C언어 퀴즈 quest 7th
//열별 최댓값 정복하기
// NxN 정수 배열에서 각 행과 각 열의 합을 계산하여, 합이 가장 큰 행과 열의 인덱스를 출력
//
#include <stdio.h>
int main() {
    int A[100][100];
    int N;
   // 1차원 노노 int sum[6];
    int row_sums[100];
    int col_sums[100];
    int max_row_index=0;
    int max_col_index=0;

    int row_maxval= row_sums[0];
    int col_maxval= col_sums[0];

    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                //행과 열의 원소를 더할만한 무언가가 필요해
                //wow 진짜 생각이 안 난네
                row_sums[i]+=A[i][j];
                col_sums[j]+=A[i][j];
                // 2차원 배열 맞네!!!
            }
    }
    //이제 만듦. 그 다음에 row_sums 원소 중 최댓값을 찾는 알고리즘을 알아야 헤
    // 나 이건 저번에도 저저번에도 못 풀었어

    //인덱스 선정 구역

    // 골치 아프네, 이거 최댓값을 찾긴 찾았어도, 최댓값이 두 개이면,
    // 더 작은 인덱스를 출력해야 해

    //(중요) 크기가 같으므로 갱신하지 않아 인덱스 1 유지
    //저게 이미 적용된 거였구나??????
    for (int i=0; i<N; i++) {
        if (row_sums[i]> row_maxval) {
            row_maxval= row_sums[i];
            max_row_index=i;
        }

        if (col_sums[i]> col_maxval) {
            col_maxval= col_sums[i];
            max_col_index=i;
        }
    }

    printf("%d %d", max_row_index,max_col_index );
}
