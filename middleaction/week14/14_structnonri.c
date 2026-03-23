//
// Created by 황시우 on 25. 12. 1..
//대성공

#include <stdio.h>

struct node
{
    unsigned int data;
    char op;
};

// 이 위로 수정 금지
unsigned int func(struct node data[]){
    unsigned int result;
    int i;

    //for(int i=0; i<N; i++){
    while(data[i].op!=0){

        if(data[i].op=='A'){
            result=data[i].data&result;
        }

        else if(data[i].op=='O'){
            result=data[i].data|result;
        }

        else if(data[i].op=='X'){
            result=data[i].data^result;
        }
        else if(data[i].op=='E'){
            return result;
            break;
        }

        else{//I,
            result=data[i].data;
        }
        i++;
    }

}
// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    int N;
    struct node data[32] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%u", &data[i].data);
    for (int i = 0; i < N; i++)
        scanf(" %c", &data[i].op);

    printf("%u", func(data));

    return 0;
}