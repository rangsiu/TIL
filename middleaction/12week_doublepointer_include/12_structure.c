//
// Created by 황시우 on 25. 11. 23..
//구조체 연습

#include <stdio.h>

// 이 위로 수정 금지
struct Student {
    char name[100];
    unsigned int student_id;
    float gpa;
    //끝..
};
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    struct Student s1;

    scanf("%s %u %f", s1.name, &s1.student_id, &s1.gpa);
    //s1.name은 왜 &을 쓰지 않냐고? s1은 문자열이니까~
    printf("%s\n", s1.name);
    printf("%u\n", s1.student_id);
    printf("%.2f", s1.gpa);

    return 0;
}