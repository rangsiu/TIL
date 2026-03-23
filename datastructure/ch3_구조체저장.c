//
// Created by 황시우 on 26. 3. 9..
//
#include <stdio.h>
#include <stdlib.h>
//배열 방식으로 구조체에 접근.

#define MAX_SIZE 100
typedef struct CallInfo {
    char name[32];
    int param;

}infos;
#include <stdio.h>
#include <stdlib.h>


typedef infos element;
//저 info가 element를 가리킵니다.
#include "arraystack.h"//<>가 아님에 유의하라.
int main() {
    element call[4]={
        "ga", 1,
        "na",2,
        "da", 3,
        "ra",4

    };

    init_stack();

    for (int i=0; i<4; i++) {
        push(call[i]);
        printf("%s %d\n", call[i].name, call[i].param);
        //여기서 왜 call[i]가 정의되지 않았다고 나오는가
        //typedef를 안 썼넼ㅋㅋㅋ
    }

   while (!is_empty()) {
       element call=pop();
    //call에다 나오는 거 저장하기.
       //top부터 차례대로 나옴,
       printf("%s %d\n", call.name, call.param);
   }


}