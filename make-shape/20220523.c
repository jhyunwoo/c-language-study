#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* a = (int*)malloc(sizeof(int));
    int* b = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));

    scanf("%d %d", a, b);
    *c = *a - *b;
    if(*c>0){
        printf("%d\n", *c);
    } else{
        printf("%d\n", *c * (-1));
    }
    return 0;
}