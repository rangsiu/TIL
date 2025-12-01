//
// chapter 8 배열과 문자열 입력받기에 대한 학습파일
// 배열에서 최댓값 찾기
//최솟값이 int0에 저장될 수 있도록 만들기, 전체 배열을 출력하기

#include <stdio.h>
int main() {
  int a[5]={3,2,1,4, 5};
  int min=a[0];
  int temp;

  for (int i=1; i<5; i++) {//기준이 되는 나머지 원소끼리 비교하기.

    if (min>a[i]) {
      //교환하는 코드, tmp를 이용해서 말이야.
      temp=a[i];
      a[i]=a[0];
      a[0]=temp;//서로 사라지지 않아
    }

    //끝날 때마다 출력하기. 4번 나오는 거지.
    for (int j=0; j<5; j++) {
      printf("%d ", a[j]);
    }
    printf("\n");
  }

}




/* 최댓값 찾기
 *#include <stdio.h>
int main() {
  int a[5];
  int nMax;
  for (int i=0; i<5; i++) {
    scanf("%d", &a[i]);
  }
  nMax=a[0];이라고 하면 심플한 거네

  for (int i=1; i<5; i++) {//제외한 것끼리 비교하고

    if (nMax<a[i]) {
      nMax=a[i];
    }
  }
  printf("%d", nMax);
}*/