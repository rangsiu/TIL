//
// Created by 황시우 on 26. 1. 26..
// p594
#include <stdio.h>
void set(char **q) {
    *q="what the fuck";
}

int main() {
    char *p;
    char **q=&p;
    set(&p);


    printf("today's good quote: %s ", p);//이거 *p여야 하는 거 아닌감 no p여야 그 변수의 값을 출력할 수 있지
}