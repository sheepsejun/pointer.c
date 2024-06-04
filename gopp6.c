#include <stdio.h>

int main(void){

    char text[10];

    int cnt = 1;
    int no = 0;
    char max;

    char *p = text;

    int n = sizeof(text) / sizeof(char);

    for(int i = 0; i < 10; i++){
        *(p + i) = getchar();
    }

    for(int i = 0; i < n; i++){
        no = 1;
        for(int j = i + 1; j < n; j++){
            if(*(p + i) == *(p + j)){
                no++;
            }
        }
         
         if(no > cnt){
            max = *(p + i);
            cnt = no;
        }
    }

    printf("최대 값 : %c , 빈도수 : %d", max, cnt);

    return 0;
}