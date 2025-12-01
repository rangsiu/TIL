//
// Created by 황시우 on 25. 11. 23..
// 어려워보이는 배열 순회, 차근차근 접근

#include <stdio.h>

int main() {
    int arr[100];

    int visited[100]={0};//0 하나만 넣으면 초기화 됨.

    for (int i=0; i<100; i++) {
        scanf("%d", &arr[i]);
    }

    // 순회 시작 변수 3개.
    int current_index=0;
    int next_index;
    int move_value;
    //move value:

    while (1) {
        if (visited[current_index]) {
            break; //이미 방문했던 인덱스에 도착하면 순회 끝
        }

        //방문하면 그 인덱스가 1!
        visited[current_index]=1;
        printf("%d ", current_index);

        //인덱스의 값만큼 이동
        move_value=arr[current_index];
        next_index=current_index+move_value;

        //2단계 만약 배열 밖을 넘어간다면

        if (next_index>=100 || next_index<0) {

            //-120과 같은 100을 넘는 음수 처리했어야 함. 다음과 같이 수정함
            next_index=(next_index % 100 + 100)% 100;
            //next_index=next_index % 100;
            //100->0, 101->1, 102->2가 되도록
        }
        // else if (next_index<0) {
            //만약 -6이라면 94가 되도록!
             /* next_index=(next_index+100); */

        //}
        current_index=next_index; //다음 순회 이동, 탈출 조건
    }
}