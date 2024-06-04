#include <stdio.h>

int main(void){

    int num[] = {4, -15, 53, -3, 5, -66, 49, 50};
    int k, *ptr;
    int max = 0; 
    int min = 0;

    int max_p;
    int min_p;

    ptr = num;

    for(int i = 0; i < 8; i++){
        if(*(ptr + i) > max){
            max = *(ptr + i);
            max_p = i;
        }
        if(*(ptr + i) < min){
            min = *(ptr + i);
            min_p = i;
        }
    }
    printf("인덱스 : %d,   최대값 : %d\n", max_p,  max);
    printf("인덱스 : %d,   최소값 : %d", min_p, min);

    return 0;

}