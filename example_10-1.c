#include <stdio.h>

int main(void){
    int i = 10;
    int *ptr =&i;

    printf("ptr의 주소 값 : %p\n", &ptr);
    printf("i의 주소 값 : %p\n", &i);
    printf("i의 주소 값 : %p\n\n", ptr);

    printf("i의 값 : %d\n", i);
    printf("i의 값 : %d\n", *ptr);
    return 0;
}