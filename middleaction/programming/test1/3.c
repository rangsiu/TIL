//
// Created by 황시우 on 26. 1. 16..
//단어 역순 출력, 마지막까지 고민했던 문제 아쉽다
#include <stdio.h>

int main(){
    char S[200];
    int endflag[200]={0};//띄어쓰기가 나온 인덱스가 아니다. 띄어쓰기가 나온 개수로 할걸..

    scanf("%s", S);

    //단어 구분 알고리즘
    //sum is good
    //새로운 문자열 q에 담을 수 없다고 가정해보자
    //그럼 순수하게 출력 싸움이야.
    //공백이 나온 수에 따라 개수가 정해져. 단어 개수=공백개수+1

    //공백 카운트가 아니야야
    while(1){
        if(S[i]==" "){
            count_void++;
            endflag[i]=i;
        }
        i++;
        if(S[i]==0){
            endflag[i]=2;//마지막 end
            break;
        }
    }

    // endflag[0]->첫번째로 공백이 나온 인덱스 번호 저장!!

    //sum is good
    //end[3]에 1, 6에 1, end[]11도 1.
    //000100100002
    //count_word=count_void+1;//단어 개수로 네가 뭘할수 있지?
    // ab cd ef gh
    //배열처럼 쓴다면 좋겠다..
    for(int i=200; i>=0; i--){
        if(endflag[i]){
            for(int j=i+1; j<)
        }

    }

}