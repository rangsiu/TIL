#include <stdio.h>

void bit_range_swap(unsigned int *a, unsigned int *b, int L, int R)
{
    // 이 위로 수정 금지

    //교환하기 비트
    unsigned int mask=(1U<<(R-L+1))-1;
    //1000->111이 -1, 바로 3개의 1을 만든다.

    //L,R 마스크 1부터 3번째 비트까지라고 하면
    //마스크가 1번째부터 시작하게
    //이 변수 만들면 안돼!

    unsigned int a_range = (*a & mask<<L) >> L;
    unsigned int b_range = (*b & mask<<L) >> L;

    *a = (*a & ~(mask<<L)) | (b_range << L);
    *b = (*b & ~(mask<<L)) | (a_range << L);
    // 이 아래로 수정 금지
}

int main(void)
{
    unsigned int A, B;
    int L, R;

    scanf("%u %u %d %d", &A, &B, &L, &R);

    bit_range_swap(&A, &B, L, R);

    printf("%u %u\n", A, B);

    return 0;
}