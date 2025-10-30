//
// Created by 황시우 on 25. 10. 30..
//

#include <stdio.h>
#define MAX_SIZE 120 // 100+2*10 -> 조건 명시.
int main()
{
    int N, P;
    int new_size;
    int matrix[MAX_SIZE][MAX_SIZE];

    scanf("%d %d", &N, &P);

    new_size = N + 2 * P; //입력받은 후 정의

    for (int i = 0; i < new_size; i++) {
        for (int j = 0; j < new_size; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int value;
            scanf("%d", &value);
            matrix[i + P][j + P] = value;
        }
    }


    for (int i = 0; i < new_size; i++) {
        for (int j = 0; j < new_size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}