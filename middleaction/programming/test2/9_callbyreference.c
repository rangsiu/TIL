//
// Created by 황시우 on 26. 2. 6..
//call by reference를 이해한다

#include <stdio.h>
//아 위로 수정 금지
void funcA(int *a, int *b);
void funcB(int *a, int *b);
void funcC(int *a, int *b);

void funcA(int *a, int *b) { //주소를 받으니 *a, *b가 파라미터.
    *a = *a + *b;   // 왼쪽 정수에 오른쪽 정수를 더함
    funcB(a, b);    // funcB 호출
}

void funcB(int *a, int *b) {
    *b = *b * (*a); // 오른쪽 정수에 왼쪽 정수를 곱함
    funcC(a, b);    // funcC 호출
}

void funcC(int *a, int *b) {
    // 추가 변수 없이 XOR 연산으로 두 값을 교환하는 테크닉
    // (반도체/임베디드에서 메모리 절약을 위해 자주 쓰임)
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}
//와 이런 테크닉 처음 봐 같은 주소일 경우 방리르 위해 a!=b
//*a = *a + *b; *b = *a - *b; *a = *a - *b; 로 하자.


//이 아래로 수정 금지
int main(int argc, char const *argv[]) {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;

    printf("%d %d\n", A, B); // 호출 전 출력
    funcA(&A, &B);           // Call by Reference 시작
    printf("%d %d\n", A, B); // 호출 후 출력

    return 0;
}