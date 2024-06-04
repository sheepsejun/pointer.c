#include <stdio.h>

int main(void){

    int a = 7;
    int *p;
    
    char b = 'A';
    char *p2 = &b;

    p = &a;

    printf("(정수형) 변경 전 : %p, ++연산 후, --연산 후: %p\n\n", p, ++p, --p);

    printf("(문자형) 변경 전 : %p  ++연산 후, --연산 후 : %p",p2 , ++p2, --p2 );

    return 0;
}