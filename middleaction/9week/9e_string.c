#include <stdio.h>
int my_strlen(const char *str) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}


#define N 10
int dx[8] = { -1, 1, 0, 0, -1, -1, 1, 1 };
int dy[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };

int in_range(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int find_word(char board[N][N + 1], char *word, int x, int y, int dir) {
    int len = my_strlen(word);
    for (int i = 0; i < len; i++) {
        int nx = x + dx[dir] * i;
        int ny = y + dy[dir] * i;
        if (!in_range(nx, ny) || board[nx][ny] != word[i])
            return 0;
    }
    return 1;
}



int main() {
    char board[N][N + 1];
    char word[11];

    // 입력

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // 공백을 무시하고 100번의 문자를 읽습니다.
            scanf(" %c", &board[i][j]);
        }
        // 문자열로 사용할 준비
        board[i][N] = '\0';
    }
    //단어 입력
        scanf("%10s", word);

        // 탐색
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int d = 0; d < 8; d++) {//보드 반복문에서 구하는 것
                    if (find_word(board, word, i, j, d)) {
                        printf("%d %d\n", i, j);
                        return 0;
                    }
                }
            }
        }
        printf("!\n");
        return 0;
    }
