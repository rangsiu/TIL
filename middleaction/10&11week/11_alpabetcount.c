//
// 알파벳 세기 문제 안의 코드에서 따로 변수를 생성하지 않음.
//

#include <stdio.h>

int main(void)
{
    char *data[10] = {
        "Apple Pie",
        "BANANA split",
        "grape Juice",
        "Cherry Tart",
        "mango Smoothie",
        "PEACH Jam",
        "StrawBerry Cake",
        "ORANGE juice",
        "waterMelon Slice",
        "Kiwi Parfait"};
    char **pp = (char **)NULL;
    char *p = (char *)NULL;
    char ch = '\0';
    int count = 0;

    scanf(" %c", &ch);//ch를 입력받는다.

    // 이 위로 수정 금지

    for (pp=data; pp<data+10; pp++) {
        //data의 시작주소는 data는 포인터들의 배열임. char**타입인 것을 꼭 확인하기.
        p=*pp; //시작 주소 저장.

        while (*p!='\0') {
            if (*p==ch) {//특정 캐릭터 문자이면은.
                count++;
            }
                p++; //주소 증가.
        }
    }


    // 이 아래로 수정 금지

    printf("%d", count);

    return 0;
}