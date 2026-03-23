#include <stdio.h>
int my_strcmp(char *s1, char *s2) {
    while(*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 > *s2) - (*s2 > *s1);
}

int counting(char str[16]){
    //하나의 문자열 16 최대 받는다
    int cnt=0;

    for(int k=0; str[k]!='\0'; k++){
        if( str[k]=='a'|| str[k]=='A'){
            cnt++;
        }
    }
    return cnt;


}
int main(){
    char c[3][3][16];

    int max_a_count = 0;  // 최대 'a'+'A' 개수



    int breaking=0; //정지 플래그
    for(int i=0; i<3&&!breaking; i++){
        for(int j=0; j<3&&!breaking; j++){


            scanf("%s", c[i][j]);

            if(my_strcmp(c[i][j], "ZZZ")==0){ //"" (o)
                breaking=1;
                break;//2. 어 반복문이 2개라서 break 불가.
            }


            int a_cnt=counting(c[i][j]);
            if(a_cnt > max_a_count)
            {
                max_a_count = a_cnt;
                // max_xidx = i;
                //max_yidx = j;
            }


        }
    }

    //  printf("%s", c[max_xidx][max_yidx], max_a_count);//3차원에선 c[x][y]가 하나의 문자열.
    //0. 각 문자열의 max_idx를 저장해놔야겠네.
    //함수를 사용하면 그 값으로 계산만 해도 되니 굳이 배열 변수를 따로 만들 이유가 없지
    if(max_a_count==0){
        //1. aA 없는 경우 포함하지 않아서 65점.
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%s\n", c[i][j]);
            }
        }

    }
    else {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(max_a_count==counting(c[i][j]) )
                {
                    printf("%s\n", c[i][j]);
                }
            }
        }
    }
        printf("%d", max_a_count);




    }