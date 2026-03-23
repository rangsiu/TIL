#define _CRT_SECURE_NO_WARNINGS
#define num 10
#include <stdio.h>
//size와 num 다른 변수로 정했어야 함.
int array_equal(int a[], int b[], int size) {
    //배열의 parameter 형식을 잘 기억할 것!!
    for (int i = 0; i < num; i++) {//size는 param일 뿐, 실제 인수인 num을 쓰기? 여기에 size를 쓰면 왜 안돼?
        if (a[i] != b[i]) {
            return 0;
            break;//1이 안 나오도록 for loop exit.
        }
        else {
            continue;//모두 조사한다는 거.
        }
        return 1; //다른 게 하나도 없었으면 1을 반환하고 싶어. 다른 조건 아니면 계속 1을 반환할 준비.
    }
}

//이거 해결해야 해. param의 size vs argument의 num

int main() {

    int a[num] = { 0 }, b[num] = { 0 }, res;

    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; i++) {
        scanf("%d", &b[i]);
    }
    res = array_equal(a, b, num);//배열의 이름, 즉 주소를 인수로 받아야 함. a[], b[](x), 그리고 실제값인 num을 size param에 대입.

    if (res) {
        printf("2개의 배열은 같음");
    }
    else {
        printf("2개의 배열은 다름");
    }

}
