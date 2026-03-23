//
// Created by 황시우 on 26. 1. 16..
//템플릿 문제, 공백 삭제를 어떻게 하는 거야 전혀 모르겠어

#include <stdio.h>

void removeSpaces(char str[]) {

    // 이 위로 수정 금지
    //str만 사용할것. str은 배열의 이름이자, 나름의 주소임.
    //인티저와 포인터가 자꾸 비교되는 이 치명적인 오류를 고쳐야 함. 다음 테스트까지 반드시 고쳐야 함.
    while(*str!=0){
        if(*str==" "){
            //삭제 방법이 무엇이지? " "를 지운다/. " "에 무언가를 넣는다. 문자로 인식되지않는
            *str="*";//요소값에 숫자 넣어보기/
        }
        str++;//move, 문자열은 확실하게 1씩 증가하는 거 맞지?? 뭐 확실한 게 없어 우씨씨
    }

    //공백 있는 곳에 숫자를 넣었으니, 이제 문자인 것만 하도록 str에 저장하면 돼
    // i*am*a*boy
    //문자를 지우는 명령어는 기억이 안나. 다만 어느 문자만 골라서 str에 저장할 순 없을까?
    //진짜 머리아파 뭘까 방안이 내가 생각도 못하는 무언가야 분명. M,N처럼
    while(*str!=0){
        if(*str=="*"){
            str++;
        }
        else{
            continue;
        }


    }


    // 이 아래로 수정 금지
}

int main() {
    char str[201]; // 최대 길이 200 + null 문자

    // 문자열 입력 받기 (공백 포함)
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);

    printf("%s\n", str);

    return 0;
}