#include <stdio.h>
//진짜 치명적인 오류를 모르겠네.

int my_strcmp(const char *str1, const char *str2) {
    // char 대신 unsigned char 포인터로 형변환
    const unsigned char *p1 = (const unsigned char *)str1;
    const unsigned char *p2 = (const unsigned char *)str2;

    // 두 포인터가 가리키는 값이 다를 때 또는 널 문자에 도달했을 때 루프를 종료.
    while (*p1 != '\0' && *p1 == *p2) {
        p1++;
        p2++;
    }

    // 최종적으로 두 문자의 차이를 정수형으로 반환

    return (int)*p1 - (int)*p2;
}

typedef struct {
    char name[21]; // 이름
    unsigned int score;     // 점수, 이거 unsigned안 해서 틀린듯 unsigned로 해야 더 큰 숫자를 넣을 수 있으니까 젠장..
    int date;       // 생년월일 (Date of Birth)
} Person;
//구조체 선언

int main() {
    int N;
    scanf("%d", &N);

    Person students[100]; //학생 최대 N명 만큼의 배열
    Person temp;

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d", students[i].name, &students[i].score, &students[i].date);
    }
    //bubble sort!
    for (int i = 0; i < N - 1; i++) {//앞의 for문이 탐색하는 거
        //for j 각 행끼리 j와 j+1끼리 비교
        for (int j=0; j<N-1-i; j++) {//범위 체크. 이미 정렬된 것은 비교하지 말자 뒤의 for문이 비교하는 거

            int swapon = 0; //0: 바꾸지 않을 것, 1: 바꿀 것
            int cmp_name=my_strcmp(students[j].name, students[j+1].name);

            if (cmp_name > 0) {
                swapon = 1; // j가 뒤로 가야 한다.
            }
            //이름이 같을 때 -점수 비교하기
            else if (cmp_name==0) {
                if (students[j].score<students[j+1].score) {
                    swapon = 1;
                }
                //이젠 생년월일 비교
                else if (students[j].score == students[j+1].score) {
                    if (students[j].date> students[j+1].date) {
                        // j의 생일이 더 늦으면, 순서를 바꾼다.
                        swapon = 1;
                    }
                }
            }

            //아직 j반복
            if (swapon) {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }//바꾸기
        }//j
    }//i

    //출력
    for (int i=0; i<N; i++) {
        printf("%s %d %06d\n", students[i].name, students[i].score, students[i].date);
    }
    return 0;
}

