//why? p2 = (int*)((long long)0); 확실히 알아두자
//근데 카운트 p2로 수행한 거 너무 칭찬해.
//girungi 1 문제 참고, 거기서는 출력형태가 제한되어 있다는 차이점이 있다ㅓ
#include <stdio.h>

int main()
{
    int map[10][10] = {0};
    int *p1, *p2;

    // 이 위로 수정 금지
    p1 = &map[0][0];
    p2 = &map[9][9];

    //입력받기, 순회 포인터:p1
    while (p1<=p2) {
        scanf("%d",p1);
        p1++;
    }
    //반드시 초기화
    p1 = &map[0][0];
   p2 = (int*)((long long)0);//포인터라서 * 쓰기. p2가 0을 가리킴
    // p2=(int*)(0); 대체 왜 long long으로?

    // 2. 1이 나오는 p1찾기.
   while (p1<=(&map[9][9])) {
       if (*p1==1) {
           break;
       }
       p1++; //1이 나올 때까지 계속 이동
   }



    //3. 1을 처음으로 찾은 이후, [9][9]까지 다 접근. p1: 순회 포인터
if (p1<(&map[9][9])+1) {
    //세로로 내려감
    while (p1<(&map[9][9]+1)) {
       if (*p1!=1) {
           break;
       }
        //1일때만 p2증가
        p2 = (int*)((long long)p2 + 1); //why not this case? p2 = (int*)(p2 + 1);
        p1=p1+10;//이거 안 했네 10개 뛰어넘어서 세로로 넘어가는 효과
    }

}

    //출력형태를 p2,p1을 사용해서 구현.
    //printf("%d", (int)p2);
    printf("%d", (int)(long long)p2);

    // 이 아래로 수정 금지
    return 0;
}
