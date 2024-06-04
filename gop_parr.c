#include <stdio.h>

int main(void){
    int A[3];
    int *ptr_A;

    ptr_A = A;

    int B[2][3];
    int (*ptr_B)[3];

    ptr_B = B;

    printf("A배열의 메모리는 %d 바이트 \n", sizeof(A));
    printf("포인터 배열 ptr_A는 %d 바이트 \n", sizeof(ptr_A));
    printf("포인터 내용물 *ptr_A는 %d 바이트 \n", sizeof(*ptr_A));

    printf("B배열의 메모리는 %d 바이트 \n", sizeof(B));
    printf("포인터 배열 ptr_B는 %d 바이트 \n", sizeof(ptr_B));
    printf("포인터 내용물 *ptr_B는 %d 바이트 \n", sizeof(*ptr_B));

    return 0;

}