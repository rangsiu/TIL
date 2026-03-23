//
// Created by 황시우 on 26. 2. 18..
//
//why fail??
#include <stdio.h>
//이게 왜 even, odd가 거꾸로인지 생각해볼거.
int cnt_even(int X);
int cnt_odd(int X);
//함수 선언 wrong? -> no main의 범위가 wrong
int main(){
    int X;
    char S[5];
    scanf("%X", &X);
    scanf("%s", S);



    //2가지 이상의 인식 형태, 문자열 상수를 받아들일까, 문자 첫 글자만 받받아들일까
    //1. odd입력하면 왜 o가 받아들여지지 않는 걸까
    if(S[0]=='o')
    {
        printf("%d",cnt_odd(X) );
    }
    else
    {
        printf("%d",cnt_even(X) );
    }
}//main end



int cnt_even(int X) {
    int cnt=0;
    for(int i=0; i<4; i++)
    {
        if(X&(1<<(2*i) ))
        {
            cnt++;
        }
    }
    return cnt;
}

int cnt_odd(int X) {
    int cnt=0;
    for(int i=0; i<4; i++){
        if( X&(1<<(2*i+1) ) )
        {
            cnt++;
        }
    }
    return cnt;
}
//
// }

