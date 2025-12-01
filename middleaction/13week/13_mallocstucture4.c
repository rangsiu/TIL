//
// Created by 황시우 on 25. 11. 30
//malloc, structure

#include <stdio.h>
#include <stdlib.h> // malloc, free 사용을 위해 필요한 표준 헤더

// 1. 문제에서 요구한 struct student 구조체 정의
struct student {
    char name[101];     // 이름: 길이가 100 미만이므로 널 문자 포함 101 크기 할당
    unsigned int age;   // 나이: 2^32 미만이므로 unsigned int 사용 (약 42억까지 저장 가능)
    float score;        // 성적: 소수점 저장을 위해 float 사용
};

int main() {

    int N;
    scanf("%d", &N);

    struct student *students= (struct student*)malloc(sizeof(struct student)*N);
    //student에서 별 하나 뺀 크기만큼 할당.

    for (int i=0; i<N; i++) {
        scanf("%s %u %f", students[i].name,&students[i].age, &students[i].score);
    }

    for (int i=0; i<N; i++) {
        printf("%s %u %.2f\n", students[i].name,students[i].age, students[i].score);
    }

    free(students);
}