//
// Created by 황시우 on 26. 3. 16..
// 대문자로 변환해서 출력하기
#include "structurestack.h"
#include <stdio.h>

//순서대로 출력하려면 여기에 pop한 결과를 다시 배열에 추가하는 코드만 작성하면 됨

int main() {

    StackType s;
    init_stack(&s);

    char str[MAX_SIZE];

    //담을 배열, 인덱스 선언
    int idx=0;
    char res[MAX_SIZE];

    scanf("%s", str);
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]>='a' && str[i]<='z') {
            push(&s, str[i]-32); //소문자는 대문자로 바꾸기.
        }
        else if (str[i]>='A' & str[i]<='Z') {
            push(&s, str[i]); //그대로
        }
    }




    while (!is_empty(&s)) {
        res[idx++]=pop(&s);//넣고 그 다음으로 이동.++

    }
    //그냥 배열이니까 마지막에  null 넣기
    res[idx]='\0';


    for (int i = idx - 1; i >= 0; i--) {
        printf("%c", res[i]);
    }
}




