//
// Created by 황시우 on 26. 1. 16..
//자료형 때문에 힘들었던 문제


#include <stdio.h>

int main(){
    long long a[5];//자료형 추가. 너 때문에 80점 날아갈 뻔. lld를 썼으면 그 배열의 모든 요소도 long long.
    long long min, temp;

    for(int i=0; i<5; i++){
        scanf("%lld", &a[i]);
    }

    //222
    min=a[0];//이거 하나 추가.
    for(int i=0; i<5; i++){
        if(min>a[i]){//우씨씨 이거 문제는 아니었네 더 치명적인 게 있나봐봐
            min=a[i];
        }
    }
    //333

    //반복문을 거치고 변경된 min
    for(int i=1; i<5; i++){
        if(a[i]==min){
            //이러면 교환은 맞음.
            temp=a[0];
            a[0]=min;
            a[i]=temp;
            break;
        }
    }

    for(int i=0; i<5; i++){
        printf("%lld ", a[i]);
    }

}