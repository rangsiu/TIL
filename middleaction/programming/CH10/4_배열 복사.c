 //
// Created by 황시우 on 26. 1. 13..
//배열 복사, 3번과 비슷한 느낌

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

void array_copy(int a[], int b[], int size);

int main() {
     int a[SIZE]={0}, b[SIZE]={0};
         for (int i=0; i<SIZE; i++)
         {
          scanf("%d", &a[i]);
         }
         for (int i=0; i<SIZE; i++)
         {
          scanf("%d", &b[i]);
         }
   array_copy(a,b,SIZE);
  //이후 출력 확인
   for (int i=0; i<SIZE; i++)
   {
    printf("%d ", a[i]);
   }
   printf("\n");
   for (int i=0; i<SIZE; i++)
   {
    printf("%d ", b[i]);
   }

}

void array_copy(int a[], int b[], int size) {
 for (int i=0; i<SIZE; i++) {
  b[i]=a[i];//교체가 아닌 복사이니까 쉬움.
 }
}
