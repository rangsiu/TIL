//
// Created by 황시우 on 26. 2. 11..
//3바이트씩 이동


#include <stdio.h>

int main(){

    unsigned int arr[10];
    unsigned int *p=arr;

    for(int i=0; i<10; i++){

        scanf("%u", &arr[i]);
    }

    for(int i=0; i<13; i++){
        printf("%u ",*(unsigned int*)((unsigned char*)p+i*3));
        //uchar로 p 바꾸었으니 다시 uint로.
    }



}