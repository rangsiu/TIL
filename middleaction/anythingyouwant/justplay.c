//
// 학습하면서 실행을 위한 파일. 아무 내용없음.
//

char sz[16]={"Hello"};
char *data=sz; //배열을 가리킨다!
//data에 sz라는 주소 상수가 들어간다.
//sz H e l l o 0
//poter지만 변수니까 값이 바뀔 수 있다.

while (*data!=0) {
    data++;//주소값+1개(1바이트) : 다음 칸으로 이동한다.
}

