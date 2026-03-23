//
// Created by 황시우 on 25. 12. 26..
//

#include <stdio.h>

int main() {
    int num;

    printf("please enter num\n");
    scanf("%d", &num);

    if (num<0) {
        num=-num;//음수이면 절댓값을 반환
    }

    printf("%d", num);
}