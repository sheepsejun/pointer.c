#include <stdio.h>
int *add_100(int num[]);

int main(void){

    int num[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }

    int *p;

    p = num;

    add_100(p);

    for(int i = 0; i < 10; i++)
        printf("%d ",*(num + i));

    return 0;
}

int *add_100(int num[]){


    for(int i = 0; i < 10; i++){
       *(num + i) = *(num + i) + 100;
    }

    return num;
}