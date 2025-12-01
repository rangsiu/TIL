//
// Created by 황시우 on 25. 11. 22..
// 원본 배열 작성 문제. 이전 배열과 버블 정렬된 배열을 따로 출력해야 함. *parr, arr을 따로 출력

#include <stdio.h>

// 이 위로 수정 금지
void sort_parr(unsigned int arr[10], unsigned int *parr[10]) {
//두 배열을 param으로
    //why runtime error? arr을 가리키도록 초기화했어야 함
    for (int i=0; i<10; i++) {
        parr[i]=&arr[i];
    }

    for (int i=0; i<10; i++) {
        for (int j=0; j<10-1-i; j++) {
            int swapon=0;

            int *temp; //포인터 변수로 가리키기

            if ((*parr[j])>(*parr[j+1])) {
                swapon=1;
            }
            if (swapon) {
                //how swap now?
                //temp 포인터 변수
                unsigned int *temp=parr[j];
                parr[j]=parr[j+1];
                parr[j+1]=temp;
            }
        }
    }
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    unsigned int arr[10] = {0};
    unsigned int *parr[10] = {0};
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%u", arr + i);
    }

    sort_parr(arr, parr);

    for (size_t i = 0; i < 10; i++)
    {
        printf("%u ", *parr[i]);
    }
    printf("\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%u ", arr[i]);
    }

    return 0;
}