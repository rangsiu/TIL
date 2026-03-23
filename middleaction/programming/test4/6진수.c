
//
// Created by 황시우 on 26. 2. 16..
//

#include <stdio.h>

int main() {
    unsigned int N;
    unsigned int bi[32];
    scanf("%u", &N);

    //6으로 나누기 0~5 N%6
    int i=0;
    while(N){

        bi[i]=N%6;
        N=N/6;
        i++;

    }
    //비트 바꾸려면 어떻게 해야 하더라?
    //1234-> 4321로 출력하기.
    //i-1번째 부터!

    for (int j=i-1; j>=0; j--) {
        printf("%u", bi[j]);
    }
}