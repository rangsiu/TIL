//
// Created by 황시우 on 25. 11. 9..
//10주차 문자열 정렬
int my_strcmp(const char *str1, const char *str2) {
    //포인터 정의
    unsigned char *p1=(unsigned char*)str1;//왜 별을 붙이는지 이해하기
    unsigned char *p2=(unsigned char*)str2;

    while ((*p1!=0) && (*p2!=0)) {
        p1++;
        p2++;
    }
    return (int)*p1-(int)*p2;//왜 여기에는 별을 안 붙이는지 이해하기
}

#include <stdio.h>
int main() {

    int N;
    char str[100][100];//j:100이라는 최대 길이.

    scanf("%d",&N);

    //문자열 입력받는 파트 클리어. i만 신경 쓴다.
    for (int i=0; i<N; i++) {

        scanf("%s",str[i]);
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
            int cmp_value=my_strcmp(str[j],str[j+1]);

            if (cmp_value) {
                //j가 먼저 앞선다면, on을 해주기
            }
        }
    }


    for (int i=0; i<N; i++) {
        printf("%s",str[i]);
    }

}