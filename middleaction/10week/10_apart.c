//
// Created by 황시우 on 25. 11. 4..
//각 배열에서 최댓값을 찾아내 출력. 포인터만 사용해서
//문자열은 사실상 포인터임
#include <stdio.h>
int main() {
    int apt[3][3][3]={0};
    int *p1, *p2, *p3;
    int i;

    //수정 금지, 반복문, 추가적인 변수 사용 금지. 매우 어려워짐.
    p1=&apt[0][0][0];
    p2=&apt[1][0][0];
    p3=&apt[2][0][0];

    while (p1+i<p1+27) {
        scanf("%d", p1+i);
        i++;
    }
    i=0;
    while (p2+i<p2+27) {
        scanf("%d", p2+i);
        i++;
    }
    i=0;
    while (p3+i<p3+27) {
        scanf("%d", p3+i);
        i++;
    }


    while (p1+i<p1+27) {
        if (max1<*(p1+i)) {
            max1=*(p1+i);

        }
        i++;
    }
    while (p2+i<p2+27) {
        if (max2<*(p2+i)) {
            max2=*(p2+i);
        }
        i++;
    }
    while (p3+i<p3+27) {
        if (max3<*(p3+i)) {
            max3=*(p3+i);
        }
        i++;
    }



    //이 중에 가장 큰 거 찾자!




    //수정 금지
    printf("%d %d %d %d", *p1, *p2, *p3, *p1 + *p2 + *p3);
    return 0;
}
