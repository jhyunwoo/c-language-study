#include <stdio.h>

int main(void)
{
    int a[10];
    int i, j, save;

    printf("input 10 int\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    save = a[0];
    for (j = 0; j < 10; j++)
    {
        if (save > a[j])
        {
            save = a[j];
        }
    }
    printf("%d\n", save);
}