//
// Created by 황시우 on 26. 2. 11..
//

#include <stdio.h>

int main(){
    unsigned int K;
    int N;

    scanf("%X %d", &K, &N);

   //d왼쪽 시프트도 해보기

    printf("%08X", K>>N );

}
