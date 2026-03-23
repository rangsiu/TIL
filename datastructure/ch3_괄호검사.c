//
// Created by 황시우 on 26. 3. 10..
// 괄호검사 파트는 알고리즘만 보고 작성할 줄 알아야 합니다.

#include <stdio.h>
#include <stdlib.h>

#include "structurestack.h"

#define MAX_SIZE 100
typedef char element;

#include <stdio.h>
int main()
{
   StackType s;
   char str[MAX_SIZE];
   init_stack(&s);
   scanf("%s", str);

   for (int i=0; str[i]!='\0'; i++) {
      if (str[i]=='(') {
         push(&s, '('); //첫 괄호이면 푸쉬,
      }
      else if (str[i]==')') {
         //닫히는 게 나오면.
         if (is_empty(&s)) return 0; //스택이 비어있는지 체크.
         pop(&s);
      }
   }
   return is_empty(&s);
   //1을 반환, 즉 스택이 비어있어야 성공합니다
}


//이것까지는 같아.



