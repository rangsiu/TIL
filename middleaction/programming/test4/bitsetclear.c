//
// Created by 황시우 on 26. 2. 11
//

#include <stdio.h>

int my_strcmp(char *s1, char *s2);
int main(){
    unsigned int X;//비트 연산시 unsigned가 안전할 거야
    int n;
    char code[10];
    scanf("%X", &X);

    for(int i=0; i<3; i++){
        scanf("%s %d", code, &n);
        if(my_strcmp("set",code)==0){
            X |= (0xFF << (n * 8));
        }

        else if ( my_strcmp("clear",code)==0 )
        {
            X &= ~(0xFF << (n * 8));
        }

    }
    printf("%08X", X);

}

//strcmp로 문자열 상수 인식하게 하기

int my_strcmp(char *s1, char *s2){
    while(*s1 &&(*s1==*s2) )
    {
        s1++;
        s2++;
    }
    return *(unsigned char*)s1-*(unsigned char*)s2;
    //0이면 같다, 아니면 1.
}
