//
// Created by 황시우 on 25. 12. 1..
// strchr
//미해결.
#include <stdio.h>

// 이 위로 수정 금지
void strchrs(char str[], char c, char *parr[]){
    *(parr)=str;//address 시작.
    while(1){
        if(str[(*parr)-str]==c){
            *(parr+1)=0; //null로
            break;
        }
        else{
            *(parr)=0;//나머지는 null
            parr++;
        }
    }
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    char str[100] = {0};
    char c;
    char *parr[101] = {0};

    scanf("%s", str);
    scanf(" %c", &c);

    strchrs(str, c, parr);

    for (int i = 0; parr[i]; i++)
    {
        printf("%ld ", parr[i] - str);
    }

    return 0;
}