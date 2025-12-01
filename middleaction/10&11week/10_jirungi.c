//
// Created by 황시우 on 25. 11. 9..
//
#include <stdio.h>

int main()
{
    int map[10][10] = {0};
    int *p1, *p2;

    // 이 위로 수정 금지


//p1, p2를 초기화하기
    //p1=map;
    p1=(int*)map; //map의 타입이 다르므로 우변을 int*으로 변환
    p2=&map[9][9];
    while (p1<=p2) {
        scanf("%d",p1);
        p1++;
    }
    //여기 왜 틀린 거지??  p1+100
    //p1은 int*이니까 한칸씩 이동 가능
    //map+100(x) 이럼 10칸 씩 이동하게 됨
    //map_end가 아니라 p1< (p1+100)으로 수정해도 되지? 안도ㅔ
    //p1+100이 아니라 (int*)map+100

    p1=(int*)map;
    while (p1<((int*)map+100)) {
        if (*p1==1) {
            p2=p1;
            // p1++; p1 멈춰있어야 해.
            p2++;
        }
        p1++;//주소 이동
    }

    //p1이 101번쨰가 되었으니 다시 초기화
    p1=(int*)map;

    // 이 아래로 수정 금지

    printf("%d", (int)(p2 - p1));
    return 0;
}