//
// Created by 황시우 on 26. 1. 16..
//학생의 성적 계산

//3명,
//그럼 5*N 배열에 5개 점수를 담은 덩어리가 3개 생기는 거야ㅣ
// 그 다음에 점수를 %.2로 산출하는 거지.
//반올림 기억해? 0.5까지는 +1이었던 거 같은데.

#include <stdio.h>

int main(){
    int score[5][100];
    double final[100];

    int N;
    scanf("%d",&N );

    for(int i=0; i<5; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &score[i][j]);
        }
    }

    for(int i=0; i<N; i++){
        final[i]=0.3*score[0][i]+0.4*score[1][i]+0.2*score[2][i]+0.1*score[3][i]-score[4][i];
        if(final[i]<0){
            final[i]=0;
        }
    }

    for(int i=0; i<N; i++){
        printf("%.2f\n", final[i]);//휴 다행이다 2f
    }

}