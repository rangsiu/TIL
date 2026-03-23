//
// Created by 황시우 on 26. 2. 11..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int Bitmask(char *str)
{
    unsigned int bitmask = 0;
    // 이 위로 수정 금지
    //'a'는 0이라고 인식하게 해야 함.
    //*str(그 때의 원소)-'a'=0;
    //*str-'a'=25;
    //b-a// 1번 비트!

    while(*str!=0)
    {
        bitmask|=(1<<(*str-'a'));
        str++;
    }

    // 이 아래로 수정 금지
    return bitmask;

    }

int main(int argc, char const *argv[])
{
    char str[104] = {0};
    unsigned int bitmask = 0;
    scanf("%s", str);
    bitmask = Bitmask(str);
    printf("%X", bitmask);
    return 0;
}