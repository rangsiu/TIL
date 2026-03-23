#include <stdio.h>

int main() {
    char str[100];
    char add[100];
    //scanf("%s", str); //str에 문자 배열 저장, 하나의 단어만 입력받을 수 있음.
    gets_s(str, 100);//성공적으로  입력했을시, str을 그대로 반환.
    gets_s(add, 100);
    //puts(str);
    //printf("%s %s ", str, add); O
    //puts(str, add); X

}