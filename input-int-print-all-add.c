#include <stdio.h>

int addAll(int a);

int main(void){
    int input;
    scanf("%d", &input);

    printf("%d\n", addAll(input));
}

int addAll(int a){
    if(a>0){
        return a + addAll(a-1);
    }
}