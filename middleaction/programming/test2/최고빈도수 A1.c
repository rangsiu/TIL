#include <stdio.h>
int mstrlen(char a[]);
int main(){
    char s[100];
    char d[50];
    char sam[200]; //제출할 최종 샘플
    int pos=-1;


    scanf("%s", s);
    scanf("%s", d);

    int n=mstrlen(s);
    int m=mstrlen(d);

    //is 나올 때의 인덱스 한 번만 찾기.

    for(int i=0; i<=n-m; i++) {
        int flag=1;
        for(int j=0; j<m; j++){
            //d 순회
            if(s[i+j]!=d[j]){
                //d 절이 다 끝남.
                flag=0;
                break;
            }
        }
        if(flag)
        {
            //발견했을 때
            pos=i;
            break;
        }
    }//for 끝.

    if (pos == -1) {
        // 패턴이 없으면 그대로 출력
        printf("%s\n", s);
        return 0;
    }


int k=0;//while을 쓰듯 독립된 변수로
    for(int i=0; i<pos; i++)
    {
    sam[k++]=s[i];//전
    }

sam[k++]=' ';

    for(int i=0; i<m; i++) {
        sam[k++]=d[i];//d부분 추가
    }

    sam[k++]=' ';

for(int i=pos+m; i<n; i++) {
    //띄어쓰기 이후 뒷부분
    sam[k++]=s[i];
}
sam[k]='\0'; //필수
printf("%s", sam);
}


int mstrlen(char a[])
{
    int res=0;
    while(*a!=0){
        res++;
        a++;
    }
    return res;
}

//이거 더 연습해서 할 수 있을 때가지 반복!

