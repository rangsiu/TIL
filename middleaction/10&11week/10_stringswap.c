//
// Created by 황시우 on 25. 11. 9..
//

#include <stdio.h>

void swap_strings(char *str1, char *str2)
{
    char tmp;
    // 이 위로 수정 금지
    while (*str1 != '\0' || *str2 != '\0') {
        // 현재 문자 교환
        tmp = *str1;
        *str1 = *str2;
        *str2 = tmp;

        // 다음 문자로 포인터 이동
        str1++;
        str2++;
    }
    // 이 아래로 수정 금지
}

int main(int argc, char const *argv[])
{
    char str1[100] = {0};
    char str2[100] = {0};

    scanf("%[^\n]", str1);
    scanf(" %[^\n]", str2);

    swap_strings(str1, str2);

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
