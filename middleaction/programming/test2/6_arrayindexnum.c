//
// Created by 황시우 on 26. 2. 3..
//

#include  <stdio.h>
int main() {
    int I;
    scanf("%d", &I);

    printf("%X", 0x200C+4*I);
    //8i, 12i가 아니라...4I이었다니 포인터 연산을 내가 아예 모르던 거였나
    //arr:0x2000
    //i가 1이면 행에서 한 칸씩 이동. int* type 이라서 arr[1]+1은 그냥 한 칸이동이었던 거
}