//
// 알파벳소문자만 해당하는 것으로 일단 치자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char word) {
    if ('a' <= word && word <= 'z') {
        return 1;
    }
    else {
        return 0; //0 또는 1, 모든 가짓수 만족.
    }
}

int main() {
    char word;
    printf("문자를 입력하시오:");
    scanf("%c", &word);
    if (check_alpha(word)) {
        printf("%c는 알파벳 문자입니다", word);
    }
    else {
        printf("%c는 알파벳 문자가 아닙니다", word);
    }
}