//
// Created by 황시우 on 25. 12. 7..
//

#include <stdio.h>

int main() {
    unsigned int arr[100];
    int visited[100] = {0};
    int i;

    //입력
    for (i = 0; i < 100; i++) {
        scanf("%x", &arr[i]);
    }

    int cur = 0;
    int output_list[100]; // 최대 100개
    int out_count = 0;

    while (1) {
        // 출발 인덱스 저장/출력
        output_list[out_count++] = cur;
        visited[cur] = 1;

        // 1비트 개수 세기
        int ones = 0;
        for (i = 0; i < 32; i++) {
            if (((arr[cur] >> i) & 1u) == 1u) ones++;
        }

        int move = 2 * ones - 32;
        int next = cur + move;

        //다음 인덱스
        next = ((next % 100) + 100) % 100;

        // 이미 방문하면 종료
        if (visited[next]) break;

        // 아니면 이동
        cur = next;
    }


    for (i = 0; i < out_count; i++) {
        if (i) printf(" ");
        printf("%d", output_list[i]);
    }
    printf("\n");
}
//입력 70F0F0F0 0 F0F070F0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 F0F0F0F0