#include <stdio.h>
int main() {

    char str[3][10];

    char input[8];
    int found=0;

    //입력받고 %s

    for (int i = 0; i < 3; i++) {
        scanf("%s", str[i]);//%9s 빼보기
    }
    scanf("%s", input);


    //
    // str 각 행의 빈칸 NULL 'X'로 채우기
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (str[i][j] == '\0') {
                str[i][j] = 'X';
            }
        }
    }

    // input 배열 빈칸 NULL 'X'로 채우기
    for (int i = 0; i < 8; i++) {
        if (input[i] == '\0') {
            input[i] = 'X';
        }
    }

    //이 문자열 배열 비교 파트가 문제가 있었어.
    for (int i = 0; i < 3; i++) {
        int equal = 1;
        for (int j = 0; j < 8; j++) {

            if (str[i][j] == '\0' && input[j] == '\0') {
                break;
            }

            if (str[i][j] != input[j]) {
                equal = 0;
                break;
            }
        }
        if (equal) {
            found++;
        }
    }

    printf("%d", found);
    return 0;

}


