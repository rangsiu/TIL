
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
//구조체 헤더에서 반드시 element라고 typedef 하기.
typedef char element; // 문자 추출 문제라면 char, 숫자라면 int

// 스택 구조체 정의
typedef struct {
    element data[MAX_SIZE];
    int top;
} StackType;
//로컬 변수

void error(char str[]) {
    printf("%s",str); //해당하는 str출력하고
    exit(1); //즉시 종료
}

void init_stack(StackType *s){
//원본 고치려면 포인터 써야 함. s는 포인터변수.
    s->top=-1;
}

int is_empty(StackType *s) {
    if (s->top==-1)
        return 1;
    else
        return 0;
}

int is_full(StackType *s) {
    return (s->top==(MAX_SIZE-1));
    //최대보다 작은 인덱스일 떄.
}


//push말고는 &s 사용.
void push(StackType *s, element e) {
    //포인터 구조체 변수 s,
    if (is_full(s)) {
        error("overflow!");
    }
    else
    {
        s->data[++(s->top)]=e;
        //인덱스 먼저 더하고, 넣는다. 처음에 -1이기 떄문에 반드시 0으로 만들기
    }
}

//push, 먼저 올리고 넣기
//pop, 먼저 꺼내고 내리기.

element pop(StackType *s) {
    if (is_empty(s)) {
        error("underflow!");
    }
    else
    {
        return s->data[(s->top)--];
    }
}

element peek(StackType *s) {
    if (is_empty(s)) {
        error("underflow");
    }
    else {
        return s->data[s->top];
    }
}
