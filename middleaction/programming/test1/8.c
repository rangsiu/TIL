//
// Created by 황시우 on 26. 1. 16..
//탐색

#include <stdio.h>

int main(){

    int a[1999];
    int N, k, id;
    int flag=0;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d",&a[i] ); //요기 lld였던 거 수정정
    }

    scanf("%d", &k);//요기  ㅣㅣd였던 거 수정하니까까

    for(int i=0; i<N; i++){
        if(a[i]==k){
            flag=1;
            id=i;
            printf("%d ",id);
            //만약 key값이 여러개라면?
        }
    }
    //이번엔 lld를 수정하니까 정답이네. 95에서 100점 되었어 뭐야 왜?

    if(flag==0){
        printf("-1");
    }

}