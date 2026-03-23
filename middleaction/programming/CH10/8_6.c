#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    int num[6]={0},check[46] = {0};

    int i=0;
    while (i<6){
        int temp = 1 + rand() % 45;//중복이 아니면 계속 i가 증가 안 함.

        if (check[temp]==0) {
            //중복 안 되었을 경우
            num[i]=temp;
            check[temp]=1;
            i++;
        }
    }

    printf("로또 번호는 다음과 같습니다");
    for (int i=0; i<6; i++) {
        printf("%d ", num[i]);
    }

}





