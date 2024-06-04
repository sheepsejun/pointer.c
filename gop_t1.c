#include <stdio.h>

int main(void){
    
    char a[10];

    gets(a);

    for(int i = 10; i >= 0; i--){
        printf("%c", *(a+i));
    }

    return 0;
}