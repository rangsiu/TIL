//
// Created by 황시우 on 25. 12. 7..
//

#include <stdio.h>

struct node
{
    unsigned int data;
    struct node *next;
};

void train(struct node *mid, int N)
{
    struct node *left, *right;
    struct node *cur = mid;

    // 이 위로 수정 금지

    // 이 아래로 수정 금지
}

int main(void)
{
    int N;
    scanf("%d", &N);

    struct node arr[100];

    for (int i = 0; i < N; i++)
    {
        scanf("%u", &arr[i].data);
        arr[i].next = NULL;
    }

    int center = N / 2;
    struct node *ptr = &arr[center];

    train(ptr, N);

    struct node *p = ptr;

    while (p != NULL)
    {
        printf("%u ", p->data);
        p = p->next;
    }

    return 0;
}