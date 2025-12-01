//
// Created by 황시우 on 25. 11. 23..
// int 10개 즉 40바이트가 주어지는데 이럴때 오른쪽으로 1바이트씩 접근하여 읽은 값을
//각각 출력하기.
#include <stdio.h>
void read(int *data) {
    //data라는 이름의 주소를 받는다->별 1개
    int total_byte=10*sizeof(int);
    //형식상 바이트
    //1바이트 이동을 위해 unsigned char 포인터 생성 둘 다 형변환..
    unsigned char *pb=(unsigned char*)data;

    //global, end 변수 만들어서 3바이트, 2바이트 읽는 일 없도록
    int end=total_byte - 3;//4가 아니라, 3!
    for (int i=0; i<end; i++) {
        //pb+i의 주소를 uint로 변환해서 4바이트 읽기..*끼리 소거.. 실제 인티저
        unsigned int value=*(unsigned int*)(pb+i);
        //pb+i는 포인터 주소
        printf("%u", value);

        // 마지막 숫자가 아니면 띄어쓰기 출력
        if (i < end) {
            printf(" ");
        }
    }
}
int main() {
    int data[10];

    for (int i=0; i<10; i++) {
        scanf("%d", &data[i]);
    }

    read(data);
}


