#include <stdio.h>

int *find_max_unit(int *unit_start)
{
    int *max_ptr = (int *)NULL;
    int *p = (int *)NULL;

    // 이 위로 수정 금지

    //오직 3변수만 사용하기.

    /* max_ptr=&apt[0][0][0];
    p=&apt[0][0][0];*/
    //&apt[0][0][0]를 입력받기

    max_ptr=unit_start;//같은 주소 변수니까 캐스팅 불필요.
    p=unit_start; //둘 다 같은 주소 변수

    //p: 순회 포인터
    while (p<(unit_start+9)) {
        if (*p>*max_ptr) {
            max_ptr=p; //그떄의 p를 주소 업데이트
        }
        p++; //주소 이동
    }

    //이제 최댓값 있는 주소 반환ㅡ max_ptr

    // 이 아래로 수정 금지

    return max_ptr;
}

int main()
{
    int apt[3][3][3] = {0};
    int *p1, *p2, *p3;
    int i;

    for (i = 0; i < 3 * 3 * 3; i++)
    {
        scanf("%d", &apt[0][0][i]);
    }

    p1 = find_max_unit(&apt[0][0][0]);
    p2 = find_max_unit(&apt[1][0][0]);
    p3 = find_max_unit(&apt[2][0][0]);

    printf("%d %d %d %d", *p1, *p2, *p3, *p1 + *p2 + *p3);

    return 0;
}