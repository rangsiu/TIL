//
// Created by 황시우 on 26. 3. 9..
//
#define MAX_SIZE 100
typedef int element;
#include <stdio.h>
#include "arraystack.h"
//스택에 저장하고 스택에서 출력하는 거 해보기
int main()
//int main은 오히려 권장된다. 여전히 사용되는 거네 뭐
{
    int a[7]={0,1,2,3,4,5,6};
    init_stack();

    for (int i=0; i<7; i++) {
        printf(" %d", a[i]);
        push(a[i]);//top이 증가함. 0->1->2->... top=6이 될 것.
    }

    printf("\n");
    while (!is_empty())
        {
        printf(" %d", pop());//while이 없는 경우, 6만 출력됩니다.
        }
//거꾸로 출력되게 할 수도 있을 것이다 변형된 스택에 맞게 메인 프로그램을 편집할 수도 있어야 합니다.
    //심플한 프로그램이지만 다양한 시도를 해서 변형된 상황을 개발해보자.

}