#include <stdio.h>

int main(void)
{
    int i = 10;
    int *ptr = &i;

    *ptr = i + 20;
    printf("i 값 : %d\n", i);

    i = i + 20;
    printf("i 값 : %d\n", *ptr);

    return 0;
}