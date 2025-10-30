

#include <stdio.h>
//메모리 너무 많이 필요한 거 아님?, define 없애고 A[N]이라고 하자.

int main() {
    int N;


    scanf("%d", &N);
    int A[N];
    for (int i=0; i<N; i++) {
        scanf("%lld", &A[i]);
    }
    int min=A[0];
    int max=A[0];//여기 A[1]이라고 왜 했을까 이거 때문에 틀렸다.

    //max, min 찾기
    for (int i=0; i<N; i++) {
        if (max<A[i]) {
            max=A[i];
        }

        if (min> A[i]) {
            min=A[i];
        }
        else
            continue;
    }

    printf("%d %d", min, max);
}
