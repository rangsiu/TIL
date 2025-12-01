//
// 왜 틀렸는지 이해 실패
//
#include <stdio.h>
//이 위로 수정 금지
// void pointer_swap(int *pa, int *pb)
    void pointer_swap(int **pa, int **pb) {//요길 이중포인터로 바꿨어야.
        int *temp;

        temp=*pa;
        *pa=*pb;
        *pb=temp;
        //변수 같아도 문제없음!! 이중 포인터를 써야 했네
        /* temp=i1;
        i1=i2;
        i2=temp; */
    }
//이 아래로 수정 금지


int main() {
    int A,B;
    int *pa=&A, *pb=&B;
    scanf("%d %d", pa,pb);
    pointer_swap(&pa, &pb);//pa, pb의 주소를 전달하는 거였구나..
    printf("%d %d\n%d %d", A,B,*pa,*pb);
    return 0;

}