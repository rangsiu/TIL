//
// Created by 황시우 on 26. 2. 5..
// 비트 0의 개수 출력
#include <stdio.h>

int main() {
    int N, cnt=0;
    int i=0;
    scanf("%X", &N);
    while(i<32) {
        //1로 써도 됨
        // !((N>>i)&1)
        //(N&(1<<i))==0
        if ((N&(1<<i))==0) {
            cnt++;
        }
        i++;
    }

    printf("%d", cnt);
}
