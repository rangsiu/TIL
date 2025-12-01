함수 메인 텍스트 실행

1. 포인터를 배열처럼 쓸 수 있다.

int main() {
    int aList[5]={0 };

    int *data=aList; //배열명이라는 주소를 포인터 변수 데이터에 넣음

    for (int i=0; i<5; i++) {
        printf("%d ", aList[i]);
    }
    printf("\n");


    *data=20;
    *(data+1)=20;//그 다음 원소 20

    for (int i=0; i<5; i++) {
        printf("%d ", data[i]);//포인터인 data로 접근해도 무방
    }

}

2.