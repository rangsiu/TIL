//
// Created by 황시우 on 25. 11. 30..
//처음으로 가로,세로가 아닌 대각선 형태로 출제
//미해결, runtime 에러 계속 뜸.
//head_tail 초기화 덕분에 문제 해결!
#include <stdio.h>

void pin_worm(int *map, int **worm, int ***head_tail)
{
    int *p1;
    // 이 위로 수정 금지
    head_tail[0] = &worm[0];//add
    head_tail[1] = &worm[11];//add &worm[10]이 아니라 11을 넣어야 하네!!
    p1=map;

    //꼬리 찾기
    while (p1<map+100) {
        if (*p1==1) {
            *worm=p1;
            **(head_tail+1)=p1;
            //(*worm)++;//로 변경
            if (!*head_tail[0]) {
                *head_tail[0]=p1; //head
            }
            worm++;
        }
        p1+=11;//대각선 다음!
    }

   //super add-> super byungsin
    *worm = 0;

    //head_tail[1] = (worm - 1);

    //**head_tail[0] = **head_tail[0];
    //**head_tail[1] = **head_tail[1];

    // 이 아래로 수정 금지
}

int main()
{
    int map[10][10] = {0};
    int *worm[11] = {0};
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