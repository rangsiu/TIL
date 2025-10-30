//
// p64
// 기존에 선언된 문자열을 출력하고, 다른 문자열을 집어넣고 그걸 또 출력하기
//p347 strcpy 함수 직접 구현

#include <stdio.h>
#include <string.h>

int main() {
    char fruit[20]="banana";
    printf("%s\n", fruit);

    strcpy(fruit, "apple");// 그럼 이 한줄과 헤더파일을 어떻게 고쳐볼깡?
    printf("%s", fruit);

}