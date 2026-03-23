//
// Created by 황시우 on 26. 1. 24..
// 단어 개수 세기 드디어 정독!! p513.

#include <stdio.h>
#include <ctype.h>
//입력되는 문자가 알파벳이라고 가정.
//isalpha 필요한가?? 필요하네 공백은 알파벳 아니니까 이거 써도 된다! 근데 이러려면 ctype.h를 써야 해.
int count_word(char *data);//data라는 변수로 중복해서 써도 되는지를 점검해보자.
int main() {
    char data[100]={0};
    scanf("%[^\n]", data);
    int cnt=count_word(data);
    printf("%d", cnt);
}

int count_word(char *data) {
    int i=0;
    int cnt=0;
   int waiting=1;//단어가 아직 아닐 떄의 플래그.


        for (i=0; data[i]!=0; i++) {
            if (isalpha(data[i])){

                if (waiting) {
                    cnt++;
                    waiting=0; //단어 만남.
                }

            }
                else {
                    waiting=1;
                }

    }
    return cnt;

}
