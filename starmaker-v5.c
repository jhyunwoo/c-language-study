#include <stdio.h>

int main(void)
{
    int a, i, j;
    int b = 1;
    int e = 1;
    int d = 0;

    printf("roop time: ");
    scanf("%d", &a);
    int c = a - 1;
    for (i = 1; i <= 2 * a * a - a; i++)
    {
        if (i <= a * a)
        {
            d = 0;
        }
        else
        {
            d = 1;
        }
        if (d == 0)
        {

            if (b > 0)
            {
                printf("*");
                b = b - 1;
            }
            if (c > 0)
            {
                printf(" ");
                c = c - 1;
            }
        }
        if (d != 0)
        {
            if (c > 0)
            {
                printf(" ");
                c = c - 1;
            }
            else if (b > 0)
            {
                printf("*");
                b = b - 1;
            }
        }
        if (i % a == 0)
        {
            e = e + 1;
            b = e;
            c = a - e;

            printf("\n");
        }
    }

    return 0;
}