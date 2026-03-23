
#include <stdio.h>

//무한 루프 어디있지?
int mystrcmp(char *s1, char *s2){
    while(*s1 && *s2 &&*s1==*s2){
        //이 조건 맞을까?
      s1++;
      s2++;
    }
    //어느 한 쪽이 더 앞서 나갔다면?
    return (*s1>*s2)- (*s2>*s1);
    //같으면 0이고 아니면 1
}

void mystrcp(char *s1, char *s2){
    //s2를 s1에 집어넣음
  while(*s2!=0){
      *s1=*s2;
      s1++;
      s2++;
  }
  //a 0이고
  *(s1+1)='\0';

  //좋아 여기 반복문제 해결!
}

int counting(char s[16]){
    //*여부 확인하기기 s는 하나의 원소소

    int i=0;
    int cnt_a=0;

    while(s[i]!=0){
        if( (s[i]=='a' && s[i+1]=='a') || ( s[i]=='A' && s[i+1]=='A') ){
            //와 ==
            cnt_a++;
        }
        i++;
    }

    return cnt_a;
}

//그 원소가 0이 아니라는 조건도 꼭 필요함. 다른 문제인지 확인하기.

int main(){
         char c[9][16];
         char fin[9][16]={0};//복사한 배열.
         int max_cnt=0;
         int m=0;


         //i가 순회함.
         int i=0;//그 때의 i를 for 밖에서 선언.
        for(i=0; i<9; i++)
        {
            scanf("%s", c[i]); //유의

            if(mystrcmp(c[i], "ZZZ")==0){

                break;
            }

            //ㅋㅋㅋ인지 검사하고 그다음에 배열 복사한

            //카운팅 순서
            //카운팅 최댓값 찾기.
            if(max_cnt<counting(c[i]) ){
                max_cnt=counting(c[i]);
            }

            //배열 복사하기.
            mystrcp(fin[i],c[i]);


        }

        //i=ZZZ일 때 브레이크됨 즉 i-1까지만 출력하면 브레이크됨

        for(int k=0; k<i; k++){
            //0이어도 그냥 zzz전까지 모두 출력하는 것이 된다.
            //c[i][j][0] != '\0'  조건 빼먹었다 ㅠㅠㅠ 실수 포인트 3
            if(counting(fin[k])== max_cnt){
                printf("%s\n", fin[k]);
            }

        }

        printf("%d", max_cnt);




}