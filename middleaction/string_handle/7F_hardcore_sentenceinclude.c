#include <stdio.h>
//역시 개어려움.
// 매크로를 사용하여 두 문장의 최대 길이를 정의합니다.
#define MAX_LENGTH 100
#define MAX_WORD_COUNT 10 // 최대 단어 개수
#define MAX_WORD_LENGTH 20 // 최대 단어 길이

int main() {
    // 1. 비교할 두 문장 정의
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

    scanf("%[^\n]", str1);

    // 첫 번째 입력 후 버퍼에 남아있는 줄바꿈 문자(\n)를 제거합니다.
    // 이는 두 번째 scanf가 버퍼의 \n을 즉시 읽고 종료되는 것을 방지합니다.
    while (getchar() != '\n');

    scanf("%[^\n]", str2);


    // 2. 단어를 저장할 2차원 배열 (단어 목록)
    char words1[MAX_WORD_COUNT][MAX_WORD_LENGTH];
    char words2[MAX_WORD_COUNT][MAX_WORD_LENGTH];

    // 3. 단어 개수를 저장할 변수
    int count1 = 0; // str1의 단어 개수
    int count2 = 0; // str2의 단어 개수

    // 4. 공통 단어 개수
    int common_count = 0;

    // ------------------------------------------------------------------
    // A. 첫 번째 문장(str1)에서 단어 추출
    // ------------------------------------------------------------------
    int i = 0; // str1 전체를 탐색하는 인덱스
    int word_idx = 0; // words1의 단어 인덱스
    int char_idx = 0; // words1[word_idx]의 문자 인덱스

    while (str1[i] != '\0') {
        // 공백(' ')이 아니면 단어 문자로 취급하여 words1에 저장
        if (str1[i] != ' ') {
            words1[word_idx][char_idx] = str1[i];
            char_idx++;
        } else {
            // 공백을 만나면 단어의 끝이므로 널 문자('\0')를 넣어 단어를 완성
            if (char_idx > 0) { // 비어있는 공백이 아닐 때만 처리
                words1[word_idx][char_idx] = '\0';
                word_idx++;
                count1++;
                char_idx = 0; // 다음 단어를 위해 문자 인덱스 초기화
            }
        }
        i++;
    }

    if (char_idx > 0) {
        words1[word_idx][char_idx] = '\0';
        count1++;
    }

    // ------------------------------------------------------------------
    // B. 두 번째 문장(str2)에서 단어 추출 (위와 동일한 로직)
    // ------------------------------------------------------------------
    i = 0;
    word_idx = 0;
    char_idx = 0;

    while (str2[i] != '\0') {
        if (str2[i] != ' ') {
            words2[word_idx][char_idx] = str2[i];
            char_idx++;
        } else {
            if (char_idx > 0) {
                words2[word_idx][char_idx] = '\0';
                word_idx++;
                count2++;
                char_idx = 0;
            }
        }
        i++;
    }
    if (char_idx > 0) {
        words2[word_idx][char_idx] = '\0';
        count2++;
    }

    // ------------------------------------------------------------------
    // C. 두 단어 목록(words1, words2)을 비교하여 공통 단어 개수 세기
    // ------------------------------------------------------------------
    int w1, w2; // words1과 words2를 순회하는 인덱스

    for (w1 = 0; w1 < count1; w1++) {
        for (w2 = 0; w2 < count2; w2++) {

            // 두 단어를 비교: words1[w1]와 words2[w2]
            int k = 0; // 단어 내부의 문자 인덱스
            int is_match = 1; // 단어가 일치하는지 확인하는 플래그 (1: 일치, 0: 불일치)

            // 단어의 끝(널 문자 '\0')을 만날 때까지 한 글자씩 비교
            while (words1[w1][k] != '\0' && words2[w2][k] != '\0') {
                if (words1[w1][k] != words2[w2][k]) {
                    is_match = 0; // 문자가 다르면 불일치
                    break;
                }
                k++;
            }

            // 단어가 끝났는지 최종 확인: 두 단어 모두 k번째 문자가 '\0'이어야 완전히 동일함
            // (예: "cat"과 "category"를 구분하기 위함)
            if (is_match && words1[w1][k] == '\0' && words2[w2][k] == '\0') {
                common_count++;
                break; // str1의 현재 단어는 찾았으므로 str2의 다음 단어는 볼 필요 없음
            }
        }
    }


    printf("%d", common_count);
}