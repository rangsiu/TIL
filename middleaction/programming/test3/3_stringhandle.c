//
// Created by 황시우 on 26. 2. 6..
//
#include <stdio.h>
int main(){
    char str[100];      // 입력받은 원본 문자열
    char numstr[100];   // 숫자만 모을 배열
    char chstr[100];    // 문자만 모을 배열

    scanf("%s", str);

    int i = 0;      // 원본 문자열용 인덱스
    int n_idx = 0;  // 숫자 배열용 전용 인덱스
    int c_idx = 0;  // 문자 배열용 전용 인덱스
    //아 이 인덱스를 따로 만들 생각을 못했네 ㅠㅠ
    //while로 순회할 예정이다.

    while (str[i]!=0) {
        if (str[i]>='0'&&str[i]<='9') {
            numstr[n_idx]=str[i];
            //그 때의 원소를 n_idx 별개의 배열에
            n_idx++;
        }
        else {
            chstr[c_idx] = str[i];
            c_idx++; // 문자 배열의 다음 칸으로 이동
        }
        i++;
    }

    //null을 넣어주어야 문자열을 잘 출력함. 주의 이 두 배열에는 애초에 null이 없었음,
    numstr[n_idx] = '\0';
    chstr[c_idx] = '\0';

// 4. 숫자와 문자를 줄바꿈(\n)으로 구분하여 출력, null이 나올 때까지 출력
printf("%s\n", numstr);
printf("%s\n", chstr);

return 0;
}