#include <stdio.h>

int main(void){

    int j;
    char *str[3] = { "monday", "tuesuday", "wednsday"};


    for(int i = 0; i < 3; i++){
        printf("값 %s  ", str[i]);
    }

    return 0;
}