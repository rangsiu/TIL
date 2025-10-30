//
// 문자열 포함 여부 확인 문제 정복하기!
//근데 왜 이리 복잡함?? 미친 문제임
//applepie, apple 두 개의 문자열을 저장하면,
//같을 때, 0 4를 출력하고 포함이 안 되면 NULL을 출력하는 프로그램.

#include <stdio.h>

int main() {
    char a[100]; // 문자열 A를 저장할 배열
    char b[100]; // 문자열 B를 저장할 배열
    int i = 0, j = 0;
    int found_index = -1; // 찾은 인덱스를 저장, 기본값은 -1
    int last_index = -1;

    scanf("%s", a);


    scanf("%s", b);//공백 없는 문자열 저장

    // 문자열 A를 순회
    while (a[i] != '\0') {
        // 문자열 A의 현재 위치부터 문자열 B와 일치하는지 확인
        if (a[i] == b[j]) {
            int temp_i = i;
            int temp_j = j;
            int match = 1; // 일치 여부를 나타내는 플래그

            // 문자열 B가 끝날 때까지 비교
            while (b[temp_j] != '\0') {
                if (a[temp_i] != b[temp_j]) {
                    match = 0; // 불일치 시 플래그를 0으로 설정
                    break;
                }
                temp_i++;
                temp_j++;
            }


        }
        i++;
    }
    if (found_index!=-1) {
        printf("%d", found_index);
    }
    else
    {
        printf("NULL");
    }
}