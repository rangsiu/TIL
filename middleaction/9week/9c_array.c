//
// Created by 황시우 on 25. 10. 27
// 지금 출력엔 이상이 없음.
#include <stdio.h>

int main()
{
    unsigned int A[100], B[100];
    int stacked[100];
    int N,M;



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

    // 일단 하나의 반복문.A의 특정 배열, 반복문에 오류가 있었다.
    for(int i=0; i<=N-M; i++)
    {
        int count=0;//여기에 있어야 해
        for (int j=0; j<M; j++) {

            if (A[i+j]==B[j]) {
                count++;
            }
            stacked[i]=count; //이게 여기에 있어야 해
        }

    }





    int max=stacked[0];
    int index_max=0;

    //stack i 중 최댓값 찾기

    //일치 개수가 가장 큰 구간이 여러 개라면, 가장 앞선 인덱스를 출력한다 how 구현
    // 만약 2번에서 최대, 8번에서도 똑같은 숫자로 최대라고 한다면
    //하지만 max는 7이고
    //거기서도 7이면 조건이 알아서 무시해주네 아!

    for(int i=0; i<=N-M; i++)
    {

        if(stacked[i]>max)
        {
            max=stacked[i];
            index_max=i;
        }
    }

    printf("%d", index_max);


}
//아직 B 입력도 안 받았다고 왜 출력이 나옴