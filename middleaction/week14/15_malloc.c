//
// Created by 황시우 on 25. 12. 7..
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N;
    unsigned int (*p1)[3];
    unsigned int (*p2)[3];

    // 이 위로 수정 금지
    scanf("%d", &N);

    p1 = malloc(N * sizeof(unsigned int[3]));


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%u", &p1[i][j]);
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            printf("%u ", p1[i][j]);
        }
        printf("\n");
    }

    free(p1);


    // 이 아래로 수정 금지

    return 0;
}


/*
 * 5
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15*/