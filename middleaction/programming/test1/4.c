//
// Created by 황시우 on 26. 1. 16..
//M과 N은 같은 포인트가 풀리지 않아서 못 푼 문제 ㅠㅠ
#include <stdio.h>

// 이 위로 수정 금지
void set_max_ptr(int array[],int N, int *max_ptr){


    max_ptr=&array[0];//주소 담음.

    while(array<(array+28)){
        if(*max_ptr<*array){
            *max_ptr=*array;//요소의 값 대입 가능?
        }
        array=array+4;//array는 배열의 이름이자 주소이다 근데 포인터로 쓸 수 잇음?? 이거 해결하면 다른 것도 풀리느데데
        //아아 답을 알고 싶다. 진짜 이거 해결하면 두 문제 다 맞추는데 ㅠㅠㅠ 런타임 에러가 나는 원인을 모르겠어

    }

}
// 이 아래로 수정 금지

int main() {
    int N;
    scanf("%d", &N);

    int array[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int *max_ptr;
    set_max_ptr(array, N, &max_ptr);

    printf("%d\n", *max_ptr);

    return 0;
}