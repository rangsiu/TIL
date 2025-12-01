//
// Created by 황시우 on 25. 11. 23
//지렁이 찾기 3

#include <stdio.h>

void pin_worm(int *map, int **worm)
{
    int *p1;
    // 이 위로 수정 금지
    //int)(parr[i] - map[0]) parr[i]가 지렁이의 일부. 즉 1인 원소

    p1=map; //map의 이름은 주소다! 타입이 같네 둘 다 int*야!

   //worm 포인터가 다음 위치를 가리키게
    while (p1<(map+100)) {
        if (*p1==1) {
            *worm=p1; //그 때의 값을 worm에 할당
            worm++;//다음 worm
        }
        p1++;

    }
*worm=0;

    // 이 아래로 수정 금지
}

int main()
{
    int map[10][10] = {0};
    int *parr[11] = {0};
    int i;

    for (i = 0; i < 100; i++)
        scanf("%d", map[0] + i);

    pin_worm(&map[0][0], parr);

    for (i = 0; parr[i]; i++)//parr[i]가 null이 아닐 때까지 출력
        printf("%d\n", (int)(parr[i] - map[0]));

    return 0;
}