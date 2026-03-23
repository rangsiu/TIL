//
// Created by 황시우 on 25. 11. 29..
//
//바이트 단위 접근 문제는 아직 이해는 무리.. 좀만 더 고민해보자.
#include <stdio.h>
int main() {
    // 예시 입력값
    unsigned int arr[10];
    for (int i=0; i<9; i++) {
        scanf("%u", &arr[i]);
    }

    // unsigned int 배열을 1바이트 단위로 접근
    unsigned char* p = (unsigned char*)arr;

    // 배열 전체 바이트 수
    int total_bytes = sizeof(arr);

    // 1바이트씩 출력
    for (int i = 0; i < total_bytes; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}

//올바른 버전
#include <stdio.h>


#define UINT_SIZE sizeof(unsigned int)

int main() {
    unsigned int A[10];

    for(int i=0; i<10; i++){
        scanf("%u",&A[i]);
    }
    unsigned char *base_ptr = (unsigned char *)A;
    int total_memory = 10 * UINT_SIZE;

    int max_iterations = total_memory - sizeof(unsigned short) + 1; // 40 - 2 + 1 = 39

    for (int i = 0; i < max_iterations; i++) {
        // 현재 1바이트 주소를 2바이트 포인터로 캐스팅하여 값을 읽음
        unsigned short read_value = *(unsigned short *)(base_ptr + i);

        // unsigned short는 %hu 포맷을 사용합니다.
        printf("%hu", read_value);

        // 마지막 출력이 아니라면 띄어쓰기 출력
        if (i < max_iterations - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}