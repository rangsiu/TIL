#include <stdio.h>

int main() {

    char a=(char)0x80;
    unsigned char b= (unsigned char) 0x80;

    if(a==b)
        printf("same");
    else
        printf("not same");

	return 0;
}