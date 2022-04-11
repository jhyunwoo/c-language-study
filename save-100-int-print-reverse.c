#include <stdio.h>

int main(void)
{
    int a[100];
    int b, i, j;

    printf("input numbers:\n");
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
    }
    for (i--; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}