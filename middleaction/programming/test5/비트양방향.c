//
// Created by 황시우 on 26. 2. 18..
//

#include <stdio.h>

int main(){
    unsigned int a[12];
    //초고난도.


    for(int i=0; i<12; i++){
        scanf("%u", &a[i]);
    }
    unsigned char *byte=(unsigned char*)a;

    for(int i=0; i<6; i++) {
        printf("%u ", (byte[i]<<4)|(byte[i+1]>>4));//전체 바이트에서 각 방향으로 4비트씩 이동.
    }
    printf("0 ");

    for(int i = 25; i < 30; i++) {
        printf("%u ", (byte[i]>>4)|(byte[i-1]<<4));
    }
}