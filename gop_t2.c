#include <stdio.h>

int sum(int *a);

int main(void){

    int a[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    int result = sum(a);

    printf("%d", result);

}

int sum(int *a){

    int result = 0;

    for(int i = 0; i < 5; i++){
        result += *(a+i);
    }

    return result;
}