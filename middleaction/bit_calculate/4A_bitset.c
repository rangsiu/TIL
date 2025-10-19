//
// Created by 황시우 on 25. 10. 19..
//
int main() {

    unsigned int A;
    int N;
    scanf("%u %d", &A, &N);
    unsigned char mask = (1 << N); //8bit로 만들어야지

    A= (A|mask);

    printf("%d", A);
}
