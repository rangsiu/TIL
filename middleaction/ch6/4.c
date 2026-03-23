//p231

#include <stdio.h>

int main() {

    int n, d, result;
    //두 개의 정수 입력받음, 정수 간의 나눗셈 실행

    printf(" enter numerate and demorate \n");

    scanf("%d %d", &n, &d);

    if (d==0) {
        printf("error! no demorate");
    }
    else {
        result=n/d;
        printf("%d", result);
    }

}