//버블 정렬 등의 학습


//bubble sort
#include <stdio.h>
#include <string.h>//string을 활용한 버전

typedef struct {
    char name[51];//문자열의 길이 50 이내
}name;

int main() {
    int N;
    scanf("%d", &N);

    name str[20000];//n개의 단어 저장.
    name temp;

    for (int i=0; i<N; i++) {
        scanf("%s", str[i].name);
    }

    for (int i = 0; i < N - 1; i++) {
        //앞의 for문이 탐색하는 거
        //for j 각 행끼리 j와 j+1끼리 비교
        for (int j=0; j<N-1-i; j++) { //j=i; j=N-1; j++로 하면 반례가 많아짐 왜?

            int swapon = 0; //0: 바꾸지 않을 것, 1: 바꿀 것
            int cmp_name=strcmp(str[j].name, str[j+1].name);

                if (strlen(str[j].name)>strlen(str[j+1].name)) {
                    swapon = 1;
                }
            else if (strlen(str[j].name)==strlen(str[j+1].name)) {
                if (cmp_name>0) {
                    swapon = 1;
                }
            }
            //정렬 끝.

            if (swapon) {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }//바꾸기
        }//j
    }//i

    for (int i = 0; i < N; i++) {
        if (strcmp(str[i].name, str[i + 1].name)) {
            printf("%s\n", str[i].name);
        }
    }
//저 뒤에 마지막 엔터는 또 뭘까?
    //재준이도 출력 초과 땸에 고생..
}