#include <stdio.h>

int main(void)
{
    int a, i, j;
    int b = 0;

    printf("roop time: ");
    scanf("%d", &a);

    for (i = 1; i <= 2 * a - 1; i++)
    {
        if (i <= a)
        {
            for (j = 1; j <= i; j++)
            {
                if (b == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
                }
        printf("\n");
    }
    return 0;
}