//
// Created by 황시우 on 25. 11. 23..
//구조체의 변수끼리 더한 값을 출력하기 이거 가능하다는 게 구조체의 특징!!

#include <stdio.h>

struct calc
{
    unsigned int a;
    unsigned int b;
    unsigned int result;
};

// 이 위로 수정 금지
void add(struct calc *data) {
    //data의 주소를 받았으니까 *1개. 중요!
    (*data).result=(*data).a+(*data).b;//주소를 받으니까 *data를 필요로 한다.
}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    struct calc data = {0};
    scanf("%u %u", &data.a, &data.b);

    add(&data);

    printf("%u", data.result);
}