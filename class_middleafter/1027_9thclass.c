//
// Created by 황시우 on 25. 10. 28..
//
unsigned char *p1, *p2, a[100]={0,}, b[2][3][5], c=7,d=128;

int i=1029, *ip;

ip=&a[3];//&a[3]은 1바이트이고 ip는 4바이트.(오류 수정)

*ip=0x06070809;// 4바이트 변수 공간에 작성 가능. ip=09080706



char c=5, d=6, e=0xEC;

char ca[5]={'p','q','r','x','t'}, da[5];


int i=50,j=50,k=0xF8;
int ia[5]={16,32,64,1,4};
char *cp, *dp;
int *ip, *jp;


//배열과 반복문 주의사항, 배열의 인덱스 넘어가지 않게 잘 쓰기
#define SIZE 10 (string)

int main() {
   int array[SIZE]={1,2,3,4,5};
    for (i=0; i<SIZE; i++) {
        printf("array[%d]", i);
    }
    //size[0]~size[4]까지만 읽게 해야 함. 쓰레기값 등장함

}

//배열의 복사 기능
int grade[10];
int score[10];

score=grade;
//why not? 문법적으로 안돼. score는 배열의 이름, 주소 상수니까
//좌변에 상수가 들어갈 수 없음. 원칙에서 벗어남.

배열 복사하는 방법은 여러가지임.
b[i]=a[i];
반복문으로 처리하는 게 제일 쉬움.

//배열의 비교
int a[5]={1,2,3,4,5};
int b[5]={1,2,3,4,5};

if (a==b)
    배열의 주소를 비교하는 건 의도가 아님.

if (a[i]!=b[i])
    으로 각각 원소의 값을 비교하는 수밖에.


//원본 배열의 변경을 해야 하는 상황

void copy(char dest[], const char src[], int size) {
    int i;
    for (i=0; i<size; i++) {
        dest[i]=src[i]; src={H, E, L, L, O, '\0'}; const로 src를 수정 못하게 할 수 있음.
    }
}


//미리 얘기. 다음 주 수업 포인터 유의사항 미리니름

void main() {
    char a[]="rose";//배열의 초기화. 알아서 채운다. r o s e null 총 5개 칸이 채워짐.
    char b[]="rose";
    char *p="grace"; //*p는 주소이다. p는 변수. grace를 가리킴.
    //p는 텍스트세그먼트의 grace를 가리킴.

    a[0]='n';
    b[0]='n';
    p[0]='t';

    printf("a=%s", a);
    printf("b=%s", b);
    printf("q=%s", p)
}







