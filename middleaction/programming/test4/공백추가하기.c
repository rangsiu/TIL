//
// Created by 황시우 on 26. 2. 11..
//

#include <stdio.h>

int main(){
    char s[100];
    char d[50];
    char fin[100];

    scanf("%s", s);
    scanf("%s", d);
    //char id_start=d[0];
    //char id_end=

    //d는 반드시 존재하니 d의 시작 문자 또는 d 문자열 상수 전체를 //인식하게 하는 방법 2가지를 생각해볼 수 있겠어.
    int i=0;
    while(s[i]!=0){
        fin[i]=s[i];
        for(int j=0; d[j]!=0; j++){
            //s 원소가 아직 am에 속해있을 때
            if(d[0]==s[i+1]){
                //처음 만날때
                fin[i]=' ';
                }

            if(d[j+1]=='\0'){
                //이 자리에 공백 추가
                fin[i+1]=' ';
                break;
                break;//while도 브레이크?
            }
        }
        i++;
    }

    fin[i]='\0';
    printf("%s",fin);



}