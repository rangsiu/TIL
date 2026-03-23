//
// Created by 황시우 on 25. 12. 1..
//더 까다로워짐

#include <stdio.h>

void pin_worm(int *map, int **worm, int ***head_tail)
{
    int *p1;
    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main()
{
    int map[10][10] = {0};
    int *worm[20] = {0};
    int **head_tail[2] = {0};
    int i;

    for (i = 0; i < 100; i++)
        scanf("%d", map[0] + i);

    pin_worm(&map[0][0], worm, head_tail);

    for (i = 0; worm[i]; i++)
        printf("%d ", (int)(worm[i] - map[0]));
    printf("\n%d %d\n", (int)(*head_tail[0] - map[0]), (int)(*head_tail[1] - map[0]));

    return 0;
}