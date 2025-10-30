//
// Created by 황시우 on 25. 10. 30..
//
#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c %c", &a, &b);

    if(a==b)
    {
        printf("YES");
    }
    else
    {
        printf("%d", a-b); }
    //해당하는 숫자 출력
}