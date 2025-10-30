//
// Created by 황시우 on 25. 10. 27..
//
#include <stdio.h>

int main()
{
    unsigned int A[100], B[100];

    int N,M;
    int stack[100];


    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++)
    {
        scanf("%u", &A[i]);
    }

    for(int i=0; i<M; i++)
    {
        scanf("%u", &B[i]);
    }

    /* N-2 번만큼 비교한다.

     n=8
     0 1 2; 0 1 2를 비교.
     1 2 3
     234
     345
     456
     567*/

    for(int i=0; i<=N-3; i++)
    {

        for(int j=0; j<M; j++)
        {
            int count=0;
            if(B[j]==A[i])
            {
                count++;
            }


            if(B[j]==A[i+1])
            {
                count++;
            }

            if(B[j]==A[i+2])
            {
                count++;
            }

            stack[i]=count; //이 떄의 값을 카운트로 저장.
        }

    }

    int max=stack[0];


    //stack i 중 최댓값 찾기

    for(int i=0; i<=N-3; i++)
    {

        if(stack[i]>max)
        {
            max=stack[i];
            break;
        }
    }

    printf("%d", max);


}