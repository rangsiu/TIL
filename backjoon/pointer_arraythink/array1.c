 int main() {
  int ary[3];

   *(ary+0)=10;
     *(ary+1)=*(ary+0)+10;

     printf("third element needed");
     scanf("%d", ary+2);

     for (int i=0; i<3; i++)
     {
         printf("%d", *(ary+i));
     }
 }

