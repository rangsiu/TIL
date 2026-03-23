//
// Created by 황시우 on 26. 2. 6..
//

#include <stdio.h>

int main() {
    unsigned int N;
    // 대문자 16진수로 입력 받기
    scanf("%X",&N);

    // 1. 각 바이트를 마스킹하여 추출합니다. (1바이트 = 8비트 = FF)
    unsigned int byte3 = (N & 0xFF000000); // 3번 바이트 (최상위)
    unsigned int byte2 = (N & 0x00FF0000); // 2번 바이트
    unsigned int byte1 = (N & 0x0000FF00); // 1번 바이트
    unsigned int byte0 = (N & 0x000000FF);
    //아 1100이 아니라 FF00이었구나..

    unsigned int swapped_byte3 = byte3 >> 16;
    unsigned int swapped_byte1 = byte1 << 16;
    //16개 이동하는 건 맞아.

    unsigned int final = swapped_byte1 | byte2 | swapped_byte3 | byte0;
    //or로 합치ㅣㄱ

    // 대문자 16진수로 출력
    printf("%X\n", final);
}

