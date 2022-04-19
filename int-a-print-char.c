#include <stdio.h>

int printEDCBA(int a){
    int i;
    for(i = 0; i < a; i++){
        printf("EDCBA\n");
    }
}

int main(void){
    int input;
    printf("input int: ");
    scanf("%d", &input);

    printEDCBA(input);
    return 0;
}