//
// Created by 황시우 on 25. 11. 29..
//정말 이게 끝...?
//그냥 개념 문제였네.. temp 필요 없음

#include <stdio.h>

struct S {
    unsigned int data;
    struct S* ptr;
};

// 이 위로 수정 금지
void two_way(struct S* p1, struct S* p2) {
    p1->ptr=p2;
    p2->ptr=p1;
    //temp 필요 없다!
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[]) {
    struct S A = { 0 };
    struct S B = { 0 };

    scanf("%u %u", &A.data, &B.data);

    two_way(&A, &B);

    printf("%u %u", A.ptr->data, B.ptr->data);

    return 0;
}