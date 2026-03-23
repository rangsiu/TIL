//
// Created by 황시우 on 26. 2. 21..
//

#include <stdio.h>

int main()
{
    char S[100] = {0};
    char *p1 = (char *)NULL;
    char *p2 = (char *)NULL;
    char tmp;
    scanf("%[^\n]", S);

    // 이 위로 수정 금지
    //상상이 안 가는데.
    //다른 풀이도 생각해보자.
    p1=S;
    p2=S;

    while(*p2){
        p2++;
    }
    p2--;//null-1인 마지막 문자를 가리킴.p2는 마지막 문자임.

    while(p1<p2){
        //서로 같은 위치면 탈출!
        //p2의 문자 요소를 p1이 가지게 함.
        tmp=*p1;
        *p1=*p2;
        *p2=tmp;
        //서로 좁혀지게끔 포인터 이동하기.
        p1++;//시작 위치에서 오른쪽으로 가는 중.
        p2--;//점점 왼쪽

    }

    // 이 아래로 수정 금지

    printf("%s", S);
    return 0;
}