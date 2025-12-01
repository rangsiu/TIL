//
// Created by 황시우 on 25. 11. 23..
//포인터 배열의 작동, ptr을 이용하여 출력

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d ", arr1[i] + j);
        }
    }

    // 이 위로 수정 금지
    int (*ptr)[4] = arr1;
    //arr1의 시작주소로 가리키며, ptr이 가리키는 대상은 4개 요소의 배열.
    //ptr은 마치 arr1[i][j]과 같지~
    // 이 아래로 수정 금지

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}