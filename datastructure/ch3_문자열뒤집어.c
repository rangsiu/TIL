//
// Created by 황시우 on 26. 3. 10..
//
#include <stdio.h>
#include <stdlib.h>
//<>는 미리 저장되어 있는 시스템 폴더에서 찾기
//""는 내가 만든 시스템 파일이다.

//헤더 파일을 그대로 사용한다는 의미
//뒤집어는 스택의 구조를 그대로 쓰면 됩니다.
//이건 배열 중심의 뒤집어 출력입니다.
//헤더 있는 버전



//char인 거 중요합니다.
#include "arraystack.h"

int main() {

    //문자열함수 적극적으로 사용 가능
    char str[MAX_SIZE];

    init_stack();
    //top=-1이 되지
    scanf("%s", str);
    //gets_s(str, 200);

    for (int i=0; str[i]!=0; i++) {
        push(str[i]);
    }

    //다시 거꾸로 출력하려면 스택을 그대로 사용하면 돼


//에이 empty를 쓰는 것은 당연한거네 여기서는 문자열을 끝까지 출력해야 하는데 is_empty가 있어야 스택이 비어있음을 확인하고 출력을 마무리할 수 있으니까.

    while (!is_empty())
    {
    printf("%c", pop());
    }
    
}