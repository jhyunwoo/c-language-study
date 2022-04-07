#include <stdio.h>

int main(void)
{
    int a[100];
    int i, b, c;

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &b);
        if (b == 0)
        {
            c = i - 1;
            break;
        }
        else
        {
            a[i] = b;
        }
    }

    for (i = 0; i <= c; i++)
    {
        printf("%d ", a[c - i]);
    }
    printf("\n");
    return 0;
}