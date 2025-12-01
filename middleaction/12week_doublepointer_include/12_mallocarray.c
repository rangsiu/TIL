//
// Created by 황시우 on 25. 11. 18..
//malloc 사용

#include <stdio.h>
#include <stdlib.h>
//미해결 문제

int main() {
    int N;

    unsigned int A;

    scanf("%d", &N);

    unsigned int *ptr=(unsigned int*)malloc(N*sizeof(unsigned int));
    //동일: unsigned int *ptr=(unsigned int*)malloc(N*sizeof(ptr));
    //이것도 int가 아니라 unsigned int였던 거네!
    //사실 이거 잘 기억이 안났어 ㅠㅠ

    //내가 놓친 포인트. 이게 정말 null이 될 떄까지인가? 한 번도 안 해봤어
    //동적 할당으로 배열 만드는 걸
    //이 상황 또 있지 않았었나. ptr이 증가하면서 N있는 영역까지 입력받기

    //for 쓰기 이거 써도 되는구나

    for (int i=0;i<N; i++) {
        scanf("%u", &A );
        //ptr이 바로 시작 주소
        *(ptr+i)=A; //이거야! 입력받은 정수를 포인터값에 할당.. 와 이거 생각해야해
    }
    /* while (*ptr!='\0') {
        scanf("%u", ptr);//ptr이야? 아니면 &ptr이야?
        ptr++;
    }*/


    //다시 역순으로 출력. 그냥 그대로 감소하면 돼
    //아 내가 무슨 짓을.. 음수인 게 나오면 탈출하면 되잖아 바보야
      /* while (1) {
        if (*ptr<0) {
            break;
        }
        else {

            /* printf("%d ", &ptr); */

           // printf("%d ", ptr); //ptr은 주소라서 & 써야 거기의 값을 얻을 수 있다.
            //ptr--;
        //}
    //}
//이 버전으로 실행 안 됨. 왜??
    for (int i=N-1; i>=0; i--) {
        printf("%u ", *(ptr+i));//ptr그대로
    }
    free(ptr);
}


//지금 수준으로 못 풀었던 문제네 ㅋㅋ
/* 왜 출력이 안 되는 걸까*/