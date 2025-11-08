//1 2 3 4 5 6 7 8 9 10
// 8 왼쪽으로 시프트해야 하는데,
//
//이거 2시간 반동안 형이 고민헀다고 함.
//s는 0~80까지의 정수이다.
#include <stdio.h>

    int main() {
        unsigned char array[10]; //정의
        int S;


        for(int i = 0; i < 10; i++) {
            int N;
            scanf("%d", &N);
            array[i] = (unsigned char)N;//1바이트로 저장, 필요할지?

        }

        scanf("%d", &S);


        int byteShift = S / 8; //8,16,24
        int bitShift = S % 8;//1~7

        // 바이트 단위 왼쪽 시프트


        if (byteShift >= 10) {
            for(int i = 0; i < 10; i++) {
                array[i] = 0;//시프트가 넘어가면 원소가 모두 0이 됨.
            }
        } else if (byteShift > 0) {
            for(int i = 0; i < 10 - byteShift; i++) {
                array[i] = array[i + byteShift]; //
            }
            for(int i = 10 - byteShift; i < 10; i++) {
                array[i] = 0;
            }
        }

        // 비트 단위 왼쪽 시프트


        if (bitShift > 0) {
            unsigned char carry = 0;
            for(int i = 0; i < 10; i++) {
                unsigned char next_carry = array[i] >> (8 - bitShift);
                array[i] = (array[i] << bitShift) | carry;
                carry = next_carry;
            }
        }


        for (int i=0; i<10; i++) {
            printf("%d ", array[i]);
        }
        return 0;
    }