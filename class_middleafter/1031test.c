


#include <stdio.h>
void swap(int *p) {
    for (int i=0; i<5; i++) {


        // 5를 맨 앞으로 두면, 1의 위치는 어디로 가는 거지?
        int max=4;
        int min=0;
        //0,4 비교중
        for (int i=0; i<2; i++) {
            int tmp=*(p+min);
            *(p+min)=*(p+max);
            *(p+max)=tmp;
            min++;
            max--;
        }

    }
}

int main()
    {
        int k[6]={1,2,3,4,5,-1};
        int *p=&k; //pointer 변수, *p=k여도 괜찮다


        swap(k);

    for (int i=0; i<6; i++) {
        printf("%d ", k[i]);
    }
        return 0;
    }



