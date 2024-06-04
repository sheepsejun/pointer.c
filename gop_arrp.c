#include <stdio.h>

int main(void){

    int a[4] = {10 ,20, 30, 40};

    int (*ap)[4];

    ap = &a;

    for(int i = 0; i < 4; i++){
        printf("%d ", (*ap)[i]);
    }

    int B[3][2] = { {8, 4} , {20, 50}, { 300 , 60}};

    printf("%d ", *(B[1] +1));

    return 0;

}