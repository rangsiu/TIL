

#include <stdio.h>

int main(){

    char str[100];
    char chstr[100];
    char any[100];
    int flag=0;
    scanf("%s", str);

    char *strp=str;
    char *charp=chstr;
    char *anyp=any;

    //포인터 접근 배열도 풀기.
    while(*strp!=0){
        if( ('a'<=*strp && *strp<='z')|| ('A'<=*strp && *strp<='Z') ) {
            *charp=*strp;
            charp++;
            flag=1;
        }
        else
        {
            *anyp=*strp;
            anyp++;
        }

        strp++;
    }

    //null 문자 깜빡, 개념적으론 치명적 오류, 결과는 올바르게 나오지만..
    *charp=0;
    *anyp=0;

    if(flag){
        printf("%s\n", chstr);
        printf("%s", any);
    }
    else{
        //아 문자가 없을 경우엔 chstr 출력을 하지 않음. 그대로
        printf("%s", str);
    }

}
//01!!2~3-4%#567@