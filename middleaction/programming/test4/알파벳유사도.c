//
// Created by 황시우 on 26. 2. 10..
//알파벳 유사도 문제

#include <stdio.h>

int main(){
    char stra[100];
    char strb[100];


    scanf("%s",stra);
    scanf("%s",strb);



    for(int j=0; strb[j]!=0; j++){
        int i=0;
        while(stra[i]!=0)
        {
            if(strb[j]==stra[i])
            {
                printf("%c", strb[j]);
                break;//important!
                //그치 그 때의 b원소를 출력하는 거니까.
            }
            i++;

        }

    }



}