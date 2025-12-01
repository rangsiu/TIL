//
// Created by 황시우 on 25. 11. 8..
//
#include <stdio.h>

void count_bit(unsigned char *A, int N, int *B)
{
    // 이 위로 수정 금지
    //묶음 수
    int unit=32 / N;
    //남은 비트 수
    int mod=32%N;
    int current_shift=32-N;


    int B_idx=0;
    unsigned int mask=~(~0<<N);//N개의 하위 비트만 마스크.
    unsigned int mask_remain=~(~0<<mod);

    //A를 올바르게 빅엔디안으로 다시 저장.
    unsigned int data32=
        ((unsigned int)A[3] << 24) |
        ((unsigned int)A[2] << 16) |
        ((unsigned int)A[1] << 8)  |
        ((unsigned int)A[0]);

    //N비트씩 추출하기. 와 미친 문제다. 일단 묶은 값을 저장하고
for (int i=0; i<unit; i++) {
    B[B_idx]= (data32>>current_shift)&mask;
    B_idx++;
    current_shift=current_shift-N;//추출 비법

}
    //나머지 남은 비트 처리하기
    if (mod) {
        B[B_idx]= data32&mask_remain;//남은 것끼리
        B_idx++;
    }



    for (int i=0; i<B_idx; i++) {
        unsigned int value=(unsigned int)B[i];//B[i]쓰기
        int count=0;
        while (value) {

            if (value&1) {
                count++;
            }
            value=value>>1;
        }
        B[i]=count;//요기! 0 0 0 0이 나온다고?? 왜 카운트했자나.
    }
    B[B_idx]=-1; //마지막 원소는 -1








    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    unsigned int A = 0;
    int N = 0;
    int B[33] = {0};

    scanf("%X %d", &A, &N);

    count_bit((unsigned char *)&A, N, B);

    for (size_t i = 0; i < 33 && B[i] != -1; i++) { printf("%d ", B[i]); } return 0; }