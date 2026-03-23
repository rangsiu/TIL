//
// Created by 황시우 on 26. 3. 18..
// practice, 헤더 있는 버전, 없는 버전
//없는 버전 테스트+ 구조체

#include <stdio.h>
#include <stdlib.h>
//헤더파일들을 여기다 써야 하고

#define MAX_SIZE 100
//이 정보도 코드에 추가해야 함.

typedef struct{
    unsigned int id;
    char name[21];
}element;

typedef struct {
    element data[MAX_SIZE];
    int top;
}Stacktype;

//선언
//그 다음 변수 생성
// typedef struct info element;로 써도 되지만 선언 시작부터 element라고 해도 됨
//저것을 element라고 칭한다.

//자, isempty, isfull, push(char item), pop(), print_stack()구현하기
//애초에 포인터 변수가 필요 없었다니 썅
//그리고 element에 해당하는 data, top을 전역 변수로 생성

Stacktype s;

void init_stack() {
    s.top=-1;
}
int is_empty() {
    if (s.top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}

int is_full() {
    if (s.top==MAX_SIZE-1) {
        return 1;
    }
    else {
        return 0;
    }
}


void push(const element item) {
    if (is_full()) {
        printf("overflow\n");
        exit(1);
    }
    else {
        s.data[++(s.top)]=item;
    }
}

element pop() {
    //구조체 전체를 반환해야 하니까 element.
    if (is_empty()) {
        printf("underflow\n");
        exit(1);
    }
    return s.data[(s.top)--];
}

element print_stack() {
    if (s.top==-1)
    {
       printf("empty\n");
    }
    else {
        for (int i=s.top; i>=0; i--) {
            printf("%u %s\n", s.data[i].id, s.data[i].name);
        }
    }

}
//stacktype *s가 아예 필요가 없었던 거 같아 이런,

int main() {

    //문자열함수 적극적으로 사용 가능 근데 구조체는 이거 필요하나?

    init_stack();
    //top=-1이 되지

    int n=5;


    for (int i=0; i<n; i++) {
        element temp; //element 로 받아야 함
        scanf("%u %s", &temp.id, temp.name);
        push(temp); //지금의 것을 push
    }

    //스택에 있는 거 출력
    print_stack();



}