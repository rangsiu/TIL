#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u", &a);

    a = ((a>>7)&0x01);


    printf("%u", a);
}
//ctrl alt I
// pointer 신난다

int solution(int a, int b) {
    return a+b;
}