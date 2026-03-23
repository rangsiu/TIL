//
// Created by 황시우 on 25. 12. 7..
//

#include <stdio.h>

// 이 위로 수정 금지
unsigned int find_best_floor(unsigned int (*apt)[3][3])
{
    unsigned int best_sum=0;
    unsigned int best_floor=0;


    for (int f = 0; f < 3; f++) {
        unsigned int sum = 0;

        for (int d = 0; d < 3; d++) {
            for (int h = 0; h < 3; h++) {
                sum += apt[d][f][h];
            }
        }

        if (f == 0 || sum > best_sum) {
            best_sum = sum;
            best_floor = f;
        }
    }

    return best_floor;
}


// 이 아래로 수정 금지

int main(int argc, char const *argv[])
{
    unsigned int apt[3][3][3] = {0};
    for (int i = 0; i < 3 * 3 * 3; i++)
        scanf("%u", apt[0][0] + i);

    printf("%u", find_best_floor(apt));

    return 0;
}