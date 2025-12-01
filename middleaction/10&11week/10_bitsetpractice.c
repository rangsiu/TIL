//
// Created by 황시우 on 25. 11. 9..
//
#include <stdio.h>
void find_set(char char1, char char2) {

    int result;
    int bit_num=0;



    //xor로 서로 다른 비트위치는 1이 되게
    result=char1^char2;

    int temp=result;
    //
    while (temp>1) {
        temp=temp>>1;
        bit_num++;
    }

    if ((char1|result)==char2) {
        printf("%c %d\n", char1, bit_num);

    }
    else if ((char2|result)==char1) {
        printf("%c %d\n", char2, bit_num);

    }

}

int main() {
    char c1, c2;
    scanf("%c %c", &c1, &c2);//입력받음
    find_set(c1,c2);
    return 0;
}

