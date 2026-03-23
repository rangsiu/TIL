//
// Created by 황시우 on 25. 12. 7..
//

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int name_len;
    char *name;
    int age;
    float val;
};

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    struct Student students[100];
    int i;

    // 이 위로 수정 금지


    for (i = 0; i < N; i++)
    {
        scanf("%d", &students[i].name_len);//수 입력

        students[i].name = (char *)malloc(students[i].name_len + 1);

        scanf("%s %d %f",
            students[i].name,
            &students[i].age,
            &students[i].val);
    }


    for (i = N - 1; i >= 0; i--)
    {
        printf("%s %d %.2f\n",
               students[i].name,
               students[i].age,
               students[i].val);
    }

    for (i = 0; i < N; i++)
    {
        free(students[i].name);
    }

    // 이 아래로 수정 금지

    return 0;
}