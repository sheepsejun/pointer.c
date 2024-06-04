#include <stdio.h>

int main(void){

    int a[10];

    int *p;

    p = a;

    int sum = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++){
        sum +=*(p + i);
    }
    printf("배열 요소들의 합은 : %d", sum);
    
    return 0;

}