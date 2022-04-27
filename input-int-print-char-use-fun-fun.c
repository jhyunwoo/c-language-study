#include <stdio.h>

int printChar(int a);

int main(void){
    int input, count;
    printf("input int under 20 : ");
    scanf("%d", &input);

    printChar(input);
    printf("\n");
}

int printChar(int a){
    if(a>=1){
        printf("%d ", a);
        printChar(a-1);
    }
}