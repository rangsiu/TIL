//
// Created by 황시우 on 25. 11. 23
//apt+malloc
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int ***apt = NULL;

    // 이 위로 수정 금지
    //malloc 3번 해야 겠다
    //동 d **포인터 3개 저장
    apt=(unsigned int***)malloc(3*sizeof(unsigned int**));

    //각 동에 메모리 할당. apt[d]는 *를 가리키는 **포인터. h 반복문 중첩
    for (int d=0; d<3; d++) {
        apt[d]=(unsigned int**)malloc(3*sizeof(unsigned int*));

        //apt[d][f]는 실제 int를 가리키는 *포인터
        for (int f=0; f<3; f++) {
            apt[d][f]=(unsigned int*)malloc(3*sizeof(unsigned int));
        }
    }

    // 이 아래로 수정 금지

    for (int d = 0; d < 3; d++)
    {
        for (int f = 0; f < 3; f++)
        {
            for (int h = 0; h < 3; h++)
            {
                scanf("%u", &apt[d][f][h]);
            }
        }
    }

    for (int d = 0; d < 3; d++)
    {
        for (int f = 0; f < 3; f++)
        {
            for (int h = 0; h < 3; h++)
            {
                printf("%u ", apt[d][f][h]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for (int d = 0; d < 3; d++)
    {
        for (int f = 0; f < 3; f++)
        {
            free(apt[d][f]);
        }
        free(apt[d]);
    }
    free(apt);

    return 0;
}