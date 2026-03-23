#include <stdio.h>
//문자열을 왜 이렇게 모르고 있지?
//문자열의 길이 구하기
int main(){
    //0000
    int count[100]={0};
    int N, max=count[0];
    char *p;

    char str[100][200];
    scanf("%d", &N);

    //111
    for(int i=0; i<N; i++){
        //요기 모르겠어.
        scanf("%s", str[i]);


        //그렇취!
        // for(int j=0; j<200; j++){
        // scanf("%s",str[i] );//[j]까지 써야 하나>
        //}
    }

    //22

    for(int i=0; i<N; i++){
        //각 문자열마다.
        p=&str[i];
        while(1){

            if(*p==0){
                break;
            }
            count[i]++;
            p++;
        }
    }
    //333

    for(int i=0; i<N; i++){
        if(max<count[i]){
            max=count[i];
        }
    }
    printf("%d", max);





}//
// Created by 황시우 on 26. 1. 16..
//