//
// Created by 황시우 on 25. 11. 29..
// 포인터 배열 사용 (*arr)[5] 주소는 입력받으니 *가 필요.

#include <stdio.h>
void print_arr(unsigned int (*arr)[5]) {
    //pointer array maybe? 이거야!
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%u ", arr[i][j]);//arr[i][j]를 쓰면 안됨. 그럼 뭐해야 해??
        }
        printf("\n");
    }
}

int main() {

    unsigned int arr[5][5]={0};

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%u", &arr[i][j]);
        }
    }

    print_arr(arr);
}