#include <stdio.h>

int main(void){
    int a, i, j, k;

    printf("roop time: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        for(j=1; j <= a - i; j++){
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++){
            printf("*");
        }

        printf("\n");
    }
}