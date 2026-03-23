//
// Created by 황시우 on 26. 2. 6..
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int Bitmask(char *str)
{
    //str을 활용.
    unsigned int bitmask = 0;

    // 문자열의 끝('\0')을 만날 때까지 반복
    while (*str != '\0') {
        // 소문자 알파벳인 경우만 처리
        if (*str >= 'a' && *str <= 'z') {
            // 'a'를 0으로 만들기 위해 'a'를 빼줌 (ASCII 값 활용)

            // 1을 shift만큼 왼쪽으로 밀어서 해당 비트만 1로 만든 후 OR 연산
            bitmask |= (1u << (*str - 'a'));
        }
        str++; // 다음 문자로 포인터 이동
    }

    return bitmask;
}

int main(int argc, char const *argv[])
{
    char str[100] = { 0 };
    unsigned int bitmask = 0;

    // 문자열 입력 (공백 없이 입력받는다고 가정)
    if (scanf("%s", str) != 1) return 0;

    bitmask = Bitmask(str);

    // 결과 출력 (16진수 소문자 형식 %x)
    printf("%x\n", bitmask);

    return 0;
}