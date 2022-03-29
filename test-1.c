#include <stdio.h>

int main(void){
    int a, b, c, i, j;

    printf("start: \n");
    scanf("%d", &a);
    printf("end: \n");     
    scanf("%d", &b);     
    printf("range: \n");     
    scanf("%d", &c);

    for(i = a; i <= b; i ++){
        for(j = 1; j<= c; j ++){
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
}