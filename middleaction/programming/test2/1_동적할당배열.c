//
// Created by 황시우 on 26. 1. 23..
//
#include <stdio.h>
#include <stdlib.h>
//동적 메모리 할당의 기본 714p~ 참고.
//다신 틀리지 말자, 다음에 반복문을 써서 동적 할당하는 문제를 풀어볼 것.

int main(){
    int N;
    scanf("%d", &N);

    // unsigned int* arr[10000]=(unsigned int*)malloc(N*sizeof(unsigned int)); 10000을 쓰는 것이 오류.

    unsigned int *arr=malloc(N*sizeof(unsigned int));//주소를 반환하기 때문에 내가 원하는 uint*로 형변환하기
    //배열은 배열명으로 확인
    //왜 invalid지? 배열을 동적할당하는 거 모름.
    //(unsigned int*) 우변의 형변환 필요 없다
    //좌변에 포인터 달고, sizeof는 안쪽 녀석이나 별 하나 뺴고.
    //즉, 10000은 신경쓰지 말고 just N만 쓰고, 포인터라는 것만 신경쓰면 되는 거였네


    for(int i=0; i<N; i++){
        scanf("%u", &arr[i]); //arr[i]의 주소, 동적 메모리는 마치 배열처럼 기능한다.
    }

    for(int i=N-1; i>=0; i--){
        printf("%u ",arr[i]);
    }


    free(arr);
}