#include <stdio.h>
int lengthfun (char s1[]) {
    int i=0;
    while (s1[i]!=0) {
        i++;
    }
    return i;
}

int main() {
    //문자열을 입력받는다. 근데 그 문자열에서 a가 있으면 개수 1 출력해서
    //a부터 z까지. 그럼 아스키 코드 외워야겠지?
    char word[100];
    scanf("%s",word);
    //공백이 없는 연속된 문자의 나열 입력 %s
    // 한 문자씩 입력받을 때는 %c

    char current_char = 'a';
    char c_count[26];
    for (int i = 0; i < 26; i++) {
        c_count[i] = 0;
    }
    //모두 0으로 초기화해야 하는가?

    for (int i=0; i<lengthfun(word); i++) {
        //내가 왜 문자열의 길이를 알아야만 하는가?
        char current_char=word[i];

        if (current_char>='a'&& current_char<='z') {
            int index= current_char-'a';
            c_count[index]++;
        }
        //a부터 z까지 다 순회하기. 근데 그 조건에 맞으면은 이제 카운트를 인덱스별로 하는 거야
    }





    for (int i=0; i<26; i++) {

        printf("%d ", c_count[i]);

    }

}


