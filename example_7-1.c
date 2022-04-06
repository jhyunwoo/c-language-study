#include <stdio.h>

int main(void)
{
    int i;
    int a[] = {5, 10, 15};

    for (i = 0; i < 3; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}