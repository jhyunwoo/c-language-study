#include <stdio.h>

int main(void)
{
    int a[10];
    int i, j, save[2];

    printf("input 10 int\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 1000)
        {
            printf("input error");
            break;
        }
    }
    save[1] = a[0];
    for (j = 0; j < 10; j++)
    {
        if (save[1] > a[j])
        {
            save[1] = a[j];
            save[0] = j;
        }
    }
    printf("%d, %d\n", save[0], save[1]);
}