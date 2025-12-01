//
// Created by 황시우 on 25. 11. 9..
//10week call by reference 연구
/*출력의 첫째 줄과 마지막 줄은 main 함수에서 출력합니다.
출력의 두 번째 줄과 다섯 번째 줄은 funcA 함수에서 출력합니다.
출력의 세 번째 줄과 네 번째 줄은 funcB 함수에서 출력합니다.
 */
#include <stdio.h>

// 이 위로 수정 금지
void funcC(int *left, int *right) {


    int temp=*left;

    *left=*right;

    *right=temp; //temp그냥 집어넣기


}

void funcB(int *left, int *right) {


    *right= *right + *left;

    printf("%d %d\n", *left, *right);

    funcC(left, right);

    printf("%d %d\n", *left, *right);



}

void funcA(int *left, int *right) {


    *left=*left + *right;

    printf("%d %d\n", *left, *right);//A,B일 필요 없이 매개변수로 표현
    funcB(left, right);//B,C가 앞에 있어야 실행가능
    printf("%d %d\n", *left, *right);
}




// 이 아래로 수정 금지

int main(int argc, char const *argv[])//main 함수를 부를때 캐릭터 포인터를 담은 배열.
//포인터들로 이루어진 배열.
//너 이런 일을 하라고 명령하는 argv 배열
//argv는 문자열. main의 파라미터 변수들이니까, 외부로부터 받은 값이니까 임의로 바꾸면 안되는 거야.

{
    int A, B;
    scanf("%d %d", &A, &B);


    printf("%d %d\n", A, B);
    funcA(&A, &B);
    printf("%d %d\n", A, B);

    return 0;
}