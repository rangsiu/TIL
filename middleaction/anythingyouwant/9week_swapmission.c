//
// Created by 황시우 on 25. 11. 4..
//문자열을 중심으로 사용법과 주의점 학습'
//배열과 포인터 변수의 이해
#include <stdio.h>
//9week swap mission 내용 담아내기.
void swap(int *p, int *q) {
    int tmp;//local
    tmp=*p;//좌변 변수 우변 포인터 값
    *p=*q;
    *q=tmp;
    //p=100(&i); q=110(&j); 이게 문제 c의 힌트?

}

int main() {
    int a=3;
    int b=5;
    swap(&a,&b);//a,b의 주소를 필요로 함 a,b가 아니라
    printf("%d %d", a, b);//번지의 값이 변경


    return 0;
}


/** call by reference:p,q,i,j의 행방
 *
 * p,q 두 값 변경
 *
 * **/