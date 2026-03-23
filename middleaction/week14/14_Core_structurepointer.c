//
// Created by 황시우 on 25. 12. 1..
//pointer 구조체 적극 활용
//

#include <stdio.h>

struct node
{
    unsigned int data;
    struct node *next;
};

// 이 위로 수정 금지
unsigned int train(struct node *one,struct node *two, struct node *three, unsigned int A, unsigned int B, unsigned int C){
    *(one->data)=A;
    two->data=B;
    three->data=C;

    one->next=&(two);//* 붙이지 말기기
    two->next=&(three);
    return &one;
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    unsigned int A, B, C;

    scanf("%u %u %u", &A, &B, &C);

    struct node one, two, three;

    struct node *ptr = train(&one, &two, &three, A, B, C);

    printf("%u", ptr->next->next->data);

    return 0;
}