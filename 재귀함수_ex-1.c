#include <stdio.h>

int f(int a);

int main(void){
    f(3);
    printf("\n");
    return 0;
}

int f(int a){
    printf("%d", a);
    if(a>1){
        f(a-1);
    }
}