//
// Created by 황시우 on 25. 11. 9
//포인터만으로 배열 입력하고 출력하기
//
#include <stdio.h>

void printCharss(char *p)
{
    char *p2 = (char *)NULL;
    // 이 위로 수정 금지

    p2=p;//치환
    for (int i = 0; i < 25; i++)
    {
            printf("%c ", p2[i]);
        //요기를 p2[i]로 하면 되는구만

    }
    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    char C[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf(" %c", &C[i][j]);
        }
    }

    printCharss(&C[0][0]);

    return 0;
}