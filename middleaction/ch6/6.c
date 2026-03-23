//
// Created by 황시우 on 26. 1. 5..
// 성적 시험 대체 왜 틀렸은!! 2,3주차 문제 다시볼 것.
#include <stdio.h>
int main() {

    int  score;

    scanf("%d", &score);

    if (score>=90) {
        printf("A");//95는 A로 들어가고 더 이상 조사 받지 않음.
    }
    else if (score>=80) { //80<=score<=90 하면 안돼. 이미 앞에서 검사했으니 필요x
        printf("B");
    }
    if (score>=70) {
        printf("C");
    }
    if (score>=60) {
        printf("D");
    }
    else {
        printf("F");
    }
}