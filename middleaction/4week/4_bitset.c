//
// 4week bit set
// 0~32: N의 범위
#include <stdio.h>
int main() {
    unsigned int A;
    int N;
    scanf("%u %d", &A, &N);
    unsigned mask=1<<N;

    A=A|mask; //0은 0과 오어하면 그대로 0, 1도 그대로 1이니까
    printf("%u", A);
    //이걸 당시에 재준이가 못 풀었구나 오호
}
