#include <stdio.h>

int main(void){

int n = 2;
int *p = &n;


printf("기존 값 : %d ", n);

*p += 3; 
printf("더한 값 : %d", n);


return 0;
}