//
// Created by 황시우 on 25. 11. 2
//

#include <stdio.h>
int main() {
    unsigned int N;

    scanf("%X", &N);
    unsigned char *p=&N;//1바이트 포인터 (unsigned char*)를 뒤에 해야 겠지?

    for (int i=0; i<sizeof(N); i++) {
        printf("%c ", *(p+i));
    }


}