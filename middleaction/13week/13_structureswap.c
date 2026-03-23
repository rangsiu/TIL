//
// Created by 황시우 on 25. 11. 29
//쌍방 관계 문제와 같은 건가?
//

#include <stdio.h>

struct S {
    unsigned int num;
    char text[100];
    float val;
};

int main() {
    struct S a,b,temp;
    //struct의 3개의 변수를 선언.

    scanf("%s %u %f", a.text, &a.num, &a.val);
    scanf("%s %u %f", b.text, &b.num, &b.val);

    //이 위로 수정 금지

    temp = a;
    a=b;
    b=temp;

    // 이 아래로 수정 금지

    printf("%s %u %.2f\n", a.text, a.num, a.val);
    printf("%s %u %.2f\n", b.text, b.num, b.val);
}
