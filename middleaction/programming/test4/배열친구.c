

#include <stdio.h>

int main(){

    unsigned int arr[6][6];
    unsigned int X;
    int outflag=0;
    int xi=0, yi=0;//이 3개로 충분 초기화 필수

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%u", &arr[i][j]);
        }
    }
    scanf("%u", &X);



    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){

            if(X==arr[i][j]){
                xi=i;
                yi=j;
                //여기서 배열 밖에 접근할 수 있으므로 left=arr[i-1][j] 쓰면 안됨
                //1 break는 j 반복 밖에 못 빠져나감 어쩌지?
                outflag=1;
                break;


            }

        }
    }


    xi>0 ? printf("%u ",arr[xi-1][yi]) : printf("-1");//UP
    xi<5 ? printf("%u ",arr[xi+1][yi]): printf("-1");//down

    yi>0 ? printf("%u ",arr[xi][yi-1]): printf("-1");//left

    yi<5 ? printf("%u ",arr[xi][yi+1]): printf("-1");//right

//이거다!



}

