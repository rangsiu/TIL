//
// Created by 황시우 on 26. 1. 5..
//

#include <stdio.h>

int main() {
    int A,B,C, min;

    scanf("%d %d %d", &A, &B, &C);
    min=A;

    if (B<A && B<C) {
        min=B;
    }
    else if (C<A && C<B) {
        min=C;
    }
    printf("%d", min);
}