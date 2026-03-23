//
// Created by 황시우 on 26. 2. 6..
//

#include <stdio.h>
#include <stdlib.h> // malloc, free를 위해 필수!

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    // 1. 행(Row) 주소들을 저장할 포인터 배열 동적 할당
    // int* 타입을 N개 담을 수 있는 공간을 만듭니다.
    int **arr = (int **)malloc(sizeof(int *) * N);
    //사이즈 주의. 더블 포인터 주의. 형변환 주의.

    // 2. 각 행마다 M개의 열(Column) 공간을 동적 할당
    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(sizeof(int) * M);
    }
    //각 요소 arr[i]는 int*임.

    //여기선 그냥 배열처럼 행동.
    // 3. 배열 사용 (예: 값 입력 및 출력)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = i * M + j; // 예시 값 대입
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 4. 메모리 해제 (할당의 역순으로!)
    // 각 행의 열 공간을 먼저 해제합니다.
    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    // 마지막으로 행 포인터 배열을 해제합니다.
    free(arr);

    return 0;
}