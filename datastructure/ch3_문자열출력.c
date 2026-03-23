//
// Created by 황시우 on 26. 3. 16..
// 구조체 로컬 변수 적용
//문자열이 뒤집어서 출력됨.
//문자만을 출력하는 조건은 거기에 push만 있으면 됩니다.
#include "structurestack.h"

int main() {

    StackType s;
    //구조체 정의.
    init_stack(&s);
    //주소를 주로 많이 삽입

    char str[MAX_SIZE];
    scanf("%s", str);

    for (int i=0; str[i]!=0; i++)
    {
             if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
             push(&s, str[i]);
             }
        //지금의 원소를 스택에 넣는다.
        //문자라면 푸쉬
    }

    //결과 출력
    while (!is_empty(&s))
    {
        printf("%c", pop(&s));
    }
    }





