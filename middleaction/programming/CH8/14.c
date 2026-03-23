//
// Created by 황시우 on 26. 1. 13..
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
}

int main() {
    int n;
    printf("양의 정수를 입력하시오:");
    scanf("%d", &n);
}
