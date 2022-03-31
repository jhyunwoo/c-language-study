#include <stdio.h>

int main(void)
{
    int a, i, j;
    int b = 1;
    int c = 0;
    printf("roop time: ");
    scanf("%d", &a);
    for (i = 1; i <= 2 * a - 1; i++)
    {
        for (j = 1; j <= b; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < a)
        {
            b = b + 1;
        }
        else
        {
            b = b - 1;
            c = 1;
        }
    }
    return 0;
}