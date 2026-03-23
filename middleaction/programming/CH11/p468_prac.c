//p468
#include <stdio.h>
int main() {
     int i=5;
     int *p=&i;
     (*p)++;
     printf("%d %p\n",i, *p);
     *p++;
     printf("%d %p",i, *p);
     //*p를 썼는데 왜 i의 값이 나오지 않는 걸까?
}