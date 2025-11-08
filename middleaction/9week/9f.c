#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int num;
    unsigned short *ptr;
    scanf("%X", &num);

    ptr=(unsigned short*)&num;

    printf("%X\n", *ptr);// 하위 2바이트 5678



    printf("%04X\n", (num >> 8) & 0xFFFF);
    printf("%X\n", *(ptr+1));  // 상위 2바이트 1234


    return 0;

}