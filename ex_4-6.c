#include <stdio.h>

int main(void)
{
    int a = 0, b = 1;

    printf("논리 연산 1 && 2의 결과 : %d\n", 1 && 2);
    printf("논리 연산 0 && 2의 결과 : %d\n\n", 0 && 2);
    printf("논리 연산 0 || 2의 결과 : %d\n", 0 || 2);
    printf("논리 연산 0 || 0의 결과 : %d\n\n", 0 || 0);
    printf("논리 연산 !a의 결과 : %d\n", !a);
    printf("논리 연산 !b의 결과 : %d\n", !b);
    return 0;
}