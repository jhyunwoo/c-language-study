#include <stdio.h>

int printSq(int a){
    int i, j;
    for(i = 1; i <= a; i++){
        for(j = 1; j<=a; j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
}

int main(){
    int input;
    printf("input int: ");
    scanf("%d", &input);
    printSq(input);
}