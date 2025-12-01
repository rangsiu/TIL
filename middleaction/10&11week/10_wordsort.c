//
// Created by 황시우 on 25. 11. 9..
//10주차 문자열 교환
int my_strcmp(char *str1, char *str2) {
    //포인터 정의
    unsigned char *p1=(unsigned char*)str1;//왜 별을 붙이는지 이해하기
    //같은 포인터이기 떄문이다. str1도 포인터.
    unsigned char *p2=(unsigned char*)str2;

    while (*p1 != 0 && *p2 != 0) {
        if (*p1 != *p2) {
            //개선: null이 될때까지 반복했었는데 여기서는 다르면 즉시 반환.
            //엣지포인트 ABYZ를 해결한 주요 포인트.
            return (int)*p1 - (int)*p2;
        }
        p1++;
        p2++;
    }

    //wrong: 어 여기 수정하니까 ZYBA가 되네
    /*while ((*p1!=0) && (*p2!=0)) {
        p1++;
        p2++;
    }*/

    return (int)*p1-(int)*p2;//왜 여기에는 별을 안 붙이는지 이해하기

}

void my_swap(char **a, char **b) {//call by reference를 위한 이중 포인터 사용 반드시 기억
    char *temp=*a;
    *a=*b;
    *b=temp;
}

#include <stdio.h>
int main() {

    int N;
    char temp;//문자열 저장받을 공간, 100,100이라고 해야 하나?
    char str[100][100];//j:100이라는 최대 길이.
    char *arr[100];//개선: swap 대상의 배열을 새로 만듦
    scanf("%d",&N);

    //문자열 입력받는 파트 클리어. i만 신경 쓴다.
    for (int i=0; i<N; i++) {

        scanf("%s",str[i]);
        arr[i]=str[i];//그대로 복사
        /*int j=0;
        while (str[i][j]!=0) {
            scanf("%s",str[i][j]);
            j++;
            j를 신경쓰지 않아도 돼
        }*/
    }

    /*버블 정렬*/

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<N-1-i; j++) {

            //앞의 for문이 탐색하는 거
            //for j 각 행끼리 j와 j+1끼리 비교
            int swap_plag=0;
            int cmp_value=my_strcmp(arr[j],arr[j+1]);

            if (cmp_value>0) {
                swap_plag=1;
            }

            if (swap_plag>0) {
                //포인터 자체의 주소 전달하기
                my_swap(&arr[j], &arr[j+1]);

            }

            /*if (cmp_value) {
                swap_plag=1;
                심각한 오류 발생 원인
            }*/



            /*if (swap_plag>0) {
                //char[100]에 해당하는 두 행, 이렇게 호출하면 안됨2,
                배열의 시작주소들이라 변경 불가
                my_swap(str[j], str[j+1]);
                //사전 순서에서 뒤에 있을때만 교환
            }*/

            /*if (swap_plag) {
               my_swap(str[j], str[j+1]);
            }*/


        }
    }


    for (int i=0; i<N; i++) {
        printf("%s\n",arr[i]);
    }

}