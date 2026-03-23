#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//소득세 계산 함수

/*
    if (income > 1000) {
        tax = (income - 1000) * 0.1;
    }
    else {
        tax = income * 0.08;
    }
    //아 이렇게 과세하는 게 아니네

*/

int get_tax(int income) {
    int tax;
    if (income > 1000) {
        tax = (income - 1000) * 0.1 + 1000 * 0.08;//1000과 함꼐 1000넘는 부분 더해서 계산.
    }
    else {//1000 이하는 8퍼
        tax = income * 0.08;
    }

    return tax;
}

int main() {
    int income;
    printf("소득을 입력하시오( 만 원):");
    scanf("%d", &income);

    printf("소득세는 %d만원입니다", get_tax(income));
}