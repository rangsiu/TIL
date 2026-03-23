//
// Created by 황시우 on 26. 2. 17..
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned int ***ptr;
    int X, Y, Z;
    int i, j, k;
    // 이 위로 수정 금지
    scanf("%d %d %d",&X,&Y,&Z);

    ptr=malloc(X*sizeof(unsigned int**));

    for(i=0; i<X; i++){
        ptr[i]=malloc(Y*sizeof(unsigned int*));
    }

    for(j=0; j<Y; j++){
        for(k=0; k<Z;k++){
            ptr[j][k]=malloc(Z*sizeof(unsigned int));
        }
    }

    for(i=0; i<X; i++){
        for(j=0; j<Y; j++){
            for(k=0; k<Z; k++){
                scanf("%u",&ptr[i][j][k]);
            }
        }
    }

    for(i=0; i<X; i++){
        for(j=0; j<Y; j++){
            for(k=0; k<Z; k++){
                printf("%d ",ptr[i][j][k]);

            }
            printf("\n");
        }
        // printf("\n");
    }

    for(j=0; j<Y; j++)
    {
        for(k=0; k<Z;k++)
        {
            free(ptr[j][k]);
        }
    }

    for(i=0; i<X; i++)
    {
        free(ptr[i]);
    }

    free(ptr);


    // 이 아래로 수정 금지

    return 0;
}