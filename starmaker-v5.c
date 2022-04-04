#include <stdio.h>

int main(void)
{
    int a, i, j;
    int b = 1;

    printf("roop time: ");
    scanf("%d", &a);

    for (i = 1; i <= 2 * (a ^ 2) - a; i++)
    {
        b = i;
        if (b > 0)
        {
            printf("*");
            b = b - 1;
        }
    }
}