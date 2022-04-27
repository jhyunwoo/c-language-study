#include <stdio.h>

int squareMinus(int a, int b){
    return (a*a - b*b);
}

int main(void){
    int in1, in2;
    printf("input two num: ");
    scanf("%d %d", &in1, &in2);

    if(in1>in2){
        printf("%d\n", squareMinus(in1, in2));
    }else{
        printf("%d\n", squareMinus(in2, in1));
    }
    return 0;
}