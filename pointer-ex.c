#include <stdio.h>

int main(void){
    int a = 5;
    int *x;
    x = &a;
    printf("%d", *x);
}