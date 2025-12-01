//
// Created by 황시우 on 25. 11. 29..
// 이걸 이해해야 5번을 풀 수 있을 듯.

#include <stdio.h>

void pin_worm(int *map, int **worm, int ***head_tail)
{
    int *p1;
    // 이 위로 수정 금지

    head_tail[0] = &worm[0];//add 이걸로 된거구나 ㅠㅠ gpt야 고마워
    head_tail[0] = &worm[0];
    //head_tail[1] = &worm[10];//add
    p1=map;
    //p1=&map[0][0]

    while (p1<map+100) {
        if (*p1==1) {
            **head_tail=p1;//더블 있는 데에 주소(값)를 넣어야지
            break;//head find!
        }
        p1++;
    }
//다시 순회 시작, worm 채우기, 꼬리 찾기
    p1=map;
    while (p1<map+100) {
        if (*p1==1) {
            *worm=p1; //worm[i]=p1;
            **(head_tail+1)=p1;//add
            //(*worm)++; //pointer move
            worm++;//다음 worm
        }
        p1++;
    }

    head_tail[1] = worm - 1;//auper add
    *worm=0; //last null **가 아니라
    //why runtime error again?

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

/* 완성본 이게 정상 작동
* #include <stdio.h>

void pin_worm(int *map, int **worm, int ***head_tail)
{
int *p1;
// 이 위로 수정 금지

head_tail[0] = &worm[0];//add
head_tail[1] = &worm[11];//add
p1=map;
//p1=&map[0][0]

while (p1<map+100) {
if (*p1==1) {
**head_tail=p1;//더블 있는 데에 주소(값)를 넣어야지
break;//head find!
}
p1++;
}
//다시 순회 시작, worm 채우기, 꼬리 찾기
p1=map;
while (p1<map+100) {
if (*p1==1) {
*worm=p1; //worm[i]=p1;
**(head_tail+1)=p1;//add
//(*worm)++; //pointer move
worm++;//다음 worm
}
p1++;
}

*worm=0; //last null **가 아니라
//why runtime error again?

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
*/