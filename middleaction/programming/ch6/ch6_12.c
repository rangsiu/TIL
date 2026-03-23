//
// Created by 황시우 on 26. 1. 8..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, num1, num2,jackpot, jack1, jack2;
    printf("복권 번호를 입력하시오: (0에서 99 사이)");
    scanf("%d", &num);
    num1=num/10;
    num2=num%10;

    srand((unsigned)time(NULL));
    jackpot=rand()%100;//stdlib 필요함. 0~99 사이 계산
    printf("당첨번호는 %d입니다", jackpot);
    jack1=jackpot/10;
    jack2=jackpot%10;


//best way??
    if (num1==jack1 || num2==jack2) {
        if (num1==jack1 && num2==jack2) {
            printf("상금은 100만원입니다");
        }
        else {
            printf("상금은 50만원입니다");
        }
    }
    else {
        printf("상금은 없습니다");
    }
}

/*if (num1==jack1 && num2==jack2) {
      printf("상금은 100만원입니다");
  }
  else if (num1==jack1 || num2==jack2) {//여기에 and도 포함인데 어쩌지

  }else {

  }*/