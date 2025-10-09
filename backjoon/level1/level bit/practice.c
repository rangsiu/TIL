#include <stdio.h>

int main()
{
    int a[5];
    int count=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int j=0; j<5; j++)
    {
        if(a[j]<60)
        {
            printf("%d \n", a[j]);
            count++;
        }
    }
    printf("%d",count);
}