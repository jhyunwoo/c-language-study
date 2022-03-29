#include <stdio.h>

int main(void){
    int a, b, i;
    
    printf("구구단 단수 입력:\n");
    scanf("%d", &a);

    printf("반복 횟수 입력: \n");
    scanf("%d", &b);

    for(i=1; i <= b; i++){
        printf("%d * %d = %d \n", a, i, a*i );
    }
}