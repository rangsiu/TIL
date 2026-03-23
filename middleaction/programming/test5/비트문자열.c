//and,or, xor 등을 인식할 수 있으려면 어떻게 해야 할까 생각보다 매우 까다로운 문제이다.

#include <stdio.h>

int main(){
    char str[100];
    int n1=0, n2=0;
    int andflag=0, orflag=0, xorflag=0;
    int i=0; //순회 인덱스스

    //숫자 추출 과정 중요!! 이게 생각이 안 났어!
    scanf("%s", str);

    while(str[i]>='0' && str[i]<='9'){
        n1= n1*10+(str[i]-'0');
        //23->2는 20으로 받고, 십진수로 받아야 나중에 비트 연산할 수 있겠지 아마?
        //3은
        i++;
    }
    //이후 i는 문자들



    for (int k = i; str[k] != '\0'; k++)
    {
        if(str[k]=='A'&&str[k+1]=='N'&&str[k+2]=='D'){
            andflag=1;
        }
        else if(str[k]=='O'&&str[k]=='R'){
            orflag=1;
        }
        else if(str[k]=='X'&&str[k+1]=='O'&&str[k+2]=='R'){
            xorflag=1;
        }

        if(str[i]>='0' && str[i]<='9'){
            //문자열 탐색 중 숫자 등장.
            i=k; // k인덱스를 이어 붙이기. 그리고 여기서 문자열 탐색 중지
            break;
        }
    }

    while(str[i]>='0' && str[i]<='9'){
        n2= n2*10+(str[i]-'0');
        //23->2는 20으로 받고, 십진수로 받아야 나중에 비트 연산할 수 있겠지 아마?
        //3은
        i++;
    }

    if(andflag){
        printf("%d", n1&n2);
    }
    else if(orflag){
        printf("%d", n1|n2);
    }
    else if(xorflag){
        printf("%d", n1^n2);
    }

}