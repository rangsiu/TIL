//
// Created by 황시우 on 26. 2. 5..
//

#include  <stdio.h>
int main() {
    char str[100];
    char T;
    scanf("%[^\n]s", str);
    //과연 null은 어떻게 될까?

    scanf(" %c", &T);//중요! 띄어쓰기 추가하기. 그래야 엔터키를 인식하지 않아.
    int i=0;
    while (str[i]!=0) {
        if (str[i]==T) {
            str[i]='*';//' ' 문자 추가
        }
        i++;
    }

    printf("%s", str);

}