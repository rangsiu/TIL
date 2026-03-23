//
// Created by 황시우 on 25. 12. 1..
// 구조체를 malloc으로 정의하기

#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[100];
    int age;
    float score;
};

int main() {
    int N;
    scanf("%d", &N);

    //d연결이 안돼 ptr과 student
    struct student *ptr=(struct student*)malloc(N*sizeof(struct student));



    //입력 받는 거
    // scanf("%s %d %f", student.name, &student.age, &student.score);
    for(int i=0; i<N; i++){
        scanf("%s %d %f", ptr->name, &(ptr->age), &(ptr->score));
    }

    for(int i=0; i<N; i++){
        printf("%s %d %.2f", ptr->name, ptr->age, ptr->score);
    }

    free(ptr);

}