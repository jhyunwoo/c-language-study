#include <stdio.h>

int main(void)
{
    int i, j, k, l, a;

    printf("roop time: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (l = 1; l <= i - 1; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}