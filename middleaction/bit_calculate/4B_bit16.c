//
// Created by 황시우 on 25. 10. 19..
// 16진수 입력받고 제일 낮은 1 찾고 브레이크시키기
#include <stdio.h>
int main() {
    unsigned int X;
    int flag=-1;
    scanf("%u", &X); //16진수, 32비트 unsigned int, X

    for (int i=0; i<32; i++) {
        if (X&(1<<i)) {
            flag=i;
            break;
        }

    }

    if (flag==-1) {
        printf("-1");
    }
    else {
        printf("%d", flag);
    }


}