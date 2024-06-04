#include <stdio.h>
int *sort(int *p);

int main(void){
    
    int a[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    
    int *p = a;

    sort(p);
    
    for(int i = 0; i < 10; i++){
        printf("%d ",a[i]);
    }
    return 0;

}

int *sort(int *p){
    int temp = 0;

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(*(p+i) > *(p+j)){
            temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;
        }
    }
    }

    return p;
}