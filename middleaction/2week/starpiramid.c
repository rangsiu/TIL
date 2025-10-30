//
// Created by 황시우 on 25. 10. 31..
//
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        for(int k=0; k<N-i; k++)
        {
            printf(" ");
        }

        for(int j=0; j<2*i-1; j++) //2i-1을 포함하지 않아야 i=1일 때 j=0 1개만 별을 출력하는 거네.
        {
            printf("*");
        }

        printf("\n");
    }



    }