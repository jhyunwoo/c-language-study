#include <stdio.h>

int main(void)
{
    int a;
    int *ptr = &a;

    scanf("%d", ptr);

    printf("%p %d\n", ptr, *ptr);
    return 0;
}