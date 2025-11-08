//
// 오버플로우 떄문에 다음 덩어리로 가진 않은 듯.
//
//

int main() {
    int k[6]={1,2,3,4,5,-1};
    int *p=&k;
    int (*q)[3]=&k;

    printf("%X\n", p);
    printf("%X\n", p+1);
    printf("%X\n", q);
    printf("%X\n", q+1);
    printf("%X", &k+1);

    //왜 이게 다음 칸의 정보를 말하는 거지?
}
