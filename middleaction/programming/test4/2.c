//
// Created by 황시우 on 26. 2. 11..
//
#include <stdio.h>

// 이 아래로 수정 금지
void swap(int **p1, int **p2){
    //시작주소를 받았으니 당연히 포인터를 파라미터로 함.


    //아 설마 그냥 쓰면 되는 거였나.
    //왜 안 바뀜. * 형태로 해야함,
    //temp 없이
    **p1=**p1-**p2;
    **p2=**p1+**p2;
    **p1=**p2-**p1;
//이 연산이 왜 오류?
    //0과 1, 그리고 7과 8만 바뀜.
}
// 이 위로 수정 금지

int main(int argc, char const *argv[]) {
     int x[8], y[8];
     int *px = x;
     int *py = y;

     for (int i = 0; i < 8; i++)
     {
         scanf("%d", &x[i]);
     }
     for (int i = 0; i < 8; i++)
     {
         scanf("%d", &y[i]);
     }

     swap(&px, &py);

     for (int i = 0; i < 8; i++)
         printf("%u ", px[i]);

     printf("\n");

     for (int i = 0; i < 8; i++)
         printf("%u ", py[i]);

     return 0;
 }
