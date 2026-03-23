#include <stdio.h>
//비트 개수 찾기 이 코드 수정해
int main(){
    int N;
    int i=0;
    scanf("%lld", &N);
    //8 1000
    //9 1001
    //8->4->2->1

    while(1){
        if(N&(1<<i)){
            count++;
        }
        i++;
    }

    //why 그 때 어떻게 한 거야>>
    //


    printf("%d", count);

}