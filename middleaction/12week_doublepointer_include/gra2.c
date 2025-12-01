#include <stdio.h>
//jajunsan's ver
int main() {
    unsigned int x;
    scanf("%X", &x);

    int bit[32];
    int move[32] = { 0 };

    for (int i = 0; i < 32; i++) {
        bit[i] = (x >> i) & 1;
    }

    for (int i = 31; i > 0; i--) {
        if (bit[i] == 1 && bit[i - 1] == 0) {
            move[i] = 1;
        }
    }

    for (int i = 31; i > 0; i--) {
        if (move[i]) {
            bit[i] = 0;
            bit[i - 1] = 1;
        }
    }

    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        if (bit[i]){
            result += (1 << i);    
        } 
    }

    printf("%08X", result);
    return 0;
}
