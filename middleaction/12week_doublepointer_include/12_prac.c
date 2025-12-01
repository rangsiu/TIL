#include <stdio.h>

void print_strings(char *arr)
{
    char **ptr = (char **)NULL;
    char *ptrs[9];
    int i;

    // 이 위로 수정 금지

    // 1. ptrs 배열 초기화 (런타임 에러 방지)
    // 9개 문자열의 시작 주소를 100바이트 간격으로 저장합니다.
    for (i = 0; i < 9; ++i) {
        ptrs[i] = arr + (i * 100);
    }

    for (i = 0; i < 9; i++)
        ptrs[i] = arr + i * 100;

    // 세로(열) 기준으로 한 글자씩 출력


    // 2. 병렬 순회 및 출력 로직
    for (i = 0; i < 4; ++i) { //진짜 엿같은 문제 추가 변수 없이 이딴 쓰레기짓을

        for (ptr = (char**)0; (int)ptr < 9; ptr = (char**)((int)ptr + 1)) {

            char current_val = ptrs[(int)ptr][i];

            // 널 문자('\0')가 아닐 경우에만 출력합니다.

            if (current_val != '\0') {

                printf("%c", current_val);
            }
        }
    }


    // 이 아래로 수정 금지
}
int main(int argc, char const *argv[])
{
    char data[3][3][100];
    for (int i = 0; i < 900; i++)
        data[0][0][i] = 'x';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf(" %[^\n]", data[i][j]);

    print_strings((char *)data);

    return 0;
}