//pointer practice,
#include <stdio.h>
int main() {
    char c=5, d=6, e=0xEC;

    char ca[5]={'p','q','r','x','t'}, da[5];

    int i=50,j=50,k=0xF8;
    int ia[5]={16,32,64,1,4};
    char *cp, *dp;
    int *ip, *jp;
    cp=(char*)ia; //타입이 다르므로 좌변에 걸맞게 우변을 캐스팅한다.
    //cp: 포인터 변수, ia: 배열 주소값(상수)
    printf("%s\n", ca);
    //3. 에러 안 난다. 반복문을 안 했는데도..
    //다만 경우에 따라 쓰레기값이 나온다. 우연히 null이 나오면 pqrxt까지만 출력된다.

    printf("%d", *cp);//*cp를 출력해야 값 16이 나온다.

}

