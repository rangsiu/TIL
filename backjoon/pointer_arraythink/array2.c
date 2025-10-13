#include <stdio.h>


   int string (char *s1) {

      int i=0;

      while (*s1!='\0') {
         s1++;
         i++;
      }
      return i;
   }

int main()
   {
      char munjang[] = "Hello world!";
      printf("%d\n", string(munjang));
}
// 1차원 배열과 문자열... -128~127까지 다 넣을 수 있다. '\0' null이라는 값이 끝을 의미하기 때문이야. 문자열의 의미 "null이 문자열의 끝을 정의한다."
//for(int i=0; s[i]; i++)
//s[i]가 null값이 될 때 거짓이 되어서 끝남.