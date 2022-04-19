#include <stdio.h>

int SumTwo(int a, int b);

int main(void){
    int x = 10, y = 5;
    int value;

    value = SumTwo(x, y);

    printf("두 수의 합: %d\n", value);

    return 0;
}
int SumTwo(int a, int b){
    int result;
    result = a + b;
    return result;
}