//
// Created by 황시우 on 26. 3. 9
//""로 헤더파일 참조할 것.
//안 보고 구현할 수 있으면 됩니다. 서른 몇 줄 잘 구현할 수 있겠지??

// 배열 전역 변수 방식 또는 구조체 로컬 변수 방식. 유연하게 짜기에는 지금은 안 돼.
#define MAX_SIZE 100
// #define MAX_SIZE 100는 헤더 파일에 해도 되고 헤더 파일이 삽입된 코드 파일에 해도 되는 거지? 둘 다 가능하지만, 헤더 파일에 1번 써두는 게 낫다.
typedef char element;//헤더에 한 번만 쓰기
element data[MAX_SIZE];
int top;
// data, top이 전역변수로 사용됩니다.

void error(char str[]) {
    // string을 입력하고.
    printf("%s\n", str);
    exit(1);//강제 종료
}

void init_stack() {
    //아무 것도 입력 x
    top=-1;//-1로 선택함.
    //즉 스택을 초기화.
}

int is_empty() { //비었는가
    if (top==-1)
        return 1;//초기 top이 -1인 상태로 그대로 있는거지.
    else
        return 0; //값이 푸쉬된 게 있다는 소리지.
}

int is_full() {
    if (top==(MAX_SIZE-1))
        return 1;
    else
        return 0;
}

void push(element e) { //어떤 값을 넣는지에 대한 argu.
    if (is_full()) {
        error("overflow!");
        //full여부 체크, push를 했는데 올릴 데가 없을 때
    }
    else data[++top]=e; //그 위치에 복사하기. ++top부터 실행, 그다음에 e가 들어감.
    //-1에서 0으로 증가시키고 쌓는 것.
    //argu 필요함.
}

element pop() {
    //이 코드는 상단 요소를 삭제하는 코드이다.
    //top에 있는 게 빠지니까 argu는 없지만 return은 있음.

    if (is_empty()) {
        //pop을 했는데 아무것도 없을 때
        error("underflow");
    }
    //top의 위치가 나오고 감소함.
    return data[top--];//data[top] 리턴하고 top-- 연산이 2개, 행동은 1개
    //--,[]은 연산.
    //data[top]을 만들어, top을 1 줄여.
    //data, top이 전역 변수라서 아규먼트 없어도 됨.
}

element peek() {
    if (is_empty( )) {
        error("underflow");
    }
    //위에 있는 항목만 살짝 반환한다.
    return data[top];
}

