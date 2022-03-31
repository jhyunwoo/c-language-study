#include <stdio.h>

int main(void)
{
    int i, j, k, l, m, a;

    printf("roop time: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (k = 1; k <= a - 1; k++)
    {
        for (l = 1; l <= k; l++)
        {
            printf(" ");
        }
        for (m = 1; m <= a - k; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}