//
// Created by 황시우 on 25. 10. 19..
// 54 32 10 FF 거꾸로 배열하기!! 쉽네
//printf("%02X ",(N>>8*i)&0x000000FF );를 printf("%02hhX", (N>>8*i)); 로 해도 동일.
//why 96점인지 모르겠음.


#include <stdio.h>
int main() {
    long long N;
    scanf("%X", &N);

unsigned int swapped= ((N>>24)&0x000000FF)|
       ((N>>8)&0xFF00)|
           ((N<<8)&0xFF000000)|
               ((N<<24)&0xFF000000);
    printf("%08X\n", swapped);
}
