#include <stdio.h>

int main(void)
{
    int i, j;
    char a[5];

    for (i = 0; i < 5; i++)
    {
        printf("enter character: ");
        scanf(" %c", &a[i]);
    }

    for (j = 0; j < 5; j++)
    {
        printf("%c", a[4 - j]);
    }
    printf("\n");
    return 0;
}