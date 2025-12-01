//
// Created by 황시우 on 25. 11. 14..
//
#include <stdio.h>

int main() {

    unsigned int N;

    scanf("%u", &N); //설마 얘 때문에?? 맞출 수 있었던 문제인데
    //이 스캔에프를 왜 안 쓴거지 병 형신이야??
    //little endian 을 여기서 어떻게 처리해야 할지 고민..
    //그냥 역으로 하면 되는데?

    for (int i=31; i>=0; i--) {

        if ((N>>i)&1) {
            printf("o");//""문자열 출력
        }
        else {
            printf("x");
        }
        if ((i%8)==0) {
            printf("\n");
        }
    }


}