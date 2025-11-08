//
// Created by 황시우 on 25. 11. 2..
// 문장 유사도 3, 단어의 개수를 계산하고 그 단어를 출력하자
//와 엿먹어 이 문제 뭐야??

#include <stdio.h>

void find_common_words() {
    char a[110]; // 문자열 A를 저장할 배열
    char b[110]; // 문자열 B를 저장할 배열

    int common_count = 0;

    char common_words[50][20];
    //50개의 단어 20줄의 문자열 길이
    scanf("%[^\n]s", a);
    getchar();
    scanf("%[^\n]s", b);

    char *ptr_A = a;
    char current_word_A[20];

    while (*ptr_A != '\0') {
        int i = 0;
        // 공백 건너뛰기
        while (*ptr_A == ' ') {
            ptr_A++;
        }
        if (*ptr_A == '\0') break; // 문장 끝이면 종료

        // 단어 A를 추출
        while (*ptr_A != ' ' && *ptr_A != '\0' && i < 20 - 1) {
            current_word_A[i++] = *ptr_A++; //단어 추출하기.
        }
        current_word_A[i] = '\0'; // 단어 끝에 널 문자 추가


        char *ptr_B = b;
        char current_word_B[20];
        int found = 0;

        while (*ptr_B != '\0') {
            int j = 0;
            // 공백 건너뛰기
            while (*ptr_B == ' ') {
                ptr_B++;
            }
            if (*ptr_B == '\0') break; // 문장 끝이면 종료

            // 단어 B 추출
            while (*ptr_B != ' ' && *ptr_B != '\0' && j < 20- 1) {
                current_word_B[j++] = *ptr_B++;
            }
            current_word_B[j] = '\0'; // 단어 끝에 널 문자 추가

            int is_same = 1;
            int k = 0;
            while (current_word_A[k] != '\0' || current_word_B[k] != '\0') {
                if (current_word_A[k] != current_word_B[k]) {
                    is_same = 0;
                    break;
                }
                k++;
            }
            if (is_same) {
                found = 1;
                break; // 문장 B에서 찾았으니 더 이상 비교할 필요 없음
            }
        }

        if (found) {
            int l = 0;
            while (current_word_A[l] != '\0') {
                common_words[common_count][l] = current_word_A[l];
                l++;
            }
            common_words[common_count][l] = '\0'; // 널 문자 추가

            common_count++;
        }
    }
    printf("%d\n", common_count);

    // 둘째 줄부터: 공통 단어들 (A에 등장하는 순서대로)
    for (int m = 0; m < common_count; m++) {
        printf("%s\n", common_words[m]);
    }
}

int main() {
    find_common_words();
    return 0;
}




