//
// Created by 황시우 on 이해를 하고 넘어가자!!
//문자열 포인터

char *fruit[]={//캐릭터 주소를 가지는 1차원 배열.
    "apple","bannaa", "pineapple"
};//초기화 때 계수 생략 가능.
/* fruits[0] -> apple'\0'
 * 캐릭터가 그래서 특별하다.
 * character뿐 아니라 null도 있다.
 * int는 원하는 인티저 데이터만 있다.
 * 텍스트 고악ㄴ의 apple을 썼지만, apple을 복사한 것이 아니라,
 * *fruits[]니까 주소만 담은 것이다.
 * apple 등은 별도의 공간에 있고, *fruits[]니까 가리키는 주소만 담는 거네.
 * 아 주소 4개니까 char *여도 4*4=16바이트를 쓰게 되는구나.





