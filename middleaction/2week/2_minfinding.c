//
// Created by 황시우 on 25. 10. 30..
//

#include <stdio.h>

int main()
{
    //long long이 딱! 배열 입력받기, 반복문으로가 유일.1
    long long a[5];
    int i=0;
    int min_idx=0;
    long long min, temp;

    for(int i=0; i<5; i++)
    {
        scanf("%lld", &a[i]);
    }

    //2단계: 모두 작성한 후임시 최솟값 설정. 인덱스도 알자
    int min= a[0];
    for(int i=1; i<5; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_idx=i;
        }
    }

    //3단계: 교환하기, pointer 안 써도 된대
    temp=a[0];
    a[0]=a[min_idx];
    a[min_idx]=temp;

    for(int i=0; i<5; i++)
    {
        printf("%lld", a[i]);
    }
}
