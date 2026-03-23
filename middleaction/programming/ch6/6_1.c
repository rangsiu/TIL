//
// Created by 황시우 on 26. 1. 5
//

#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a%b==0) {
        printf("ok");
    }
    else {
        printf("no");
    }
}