#include <stdio.h>

int main(void)
{
    int i, star, space, userInput;

    printf("roop time: ");
    scanf("%d", &userInput);
    int marker = 1;
    star = 1;
    space = userInput - marker;

    for (i = 1; i <= userInput * userInput + userInput - 1; i++)
    {
        if (marker <= userInput)
        {
            if (star > 0)
            {
                printf("*");
                star = star - 1;
            }
            else if (space > 0)
            {
                printf(" ");
                space = space - 1;
            }
            else if (space == 0 && star == 0)
            {
                printf("\n");
                marker = marker + 1;
                star = marker;
                space = userInput - marker;
            }

            if (marker == userInput)
            {
                star = 1;
                space = marker - 1;
            }
        }
    }
    marker = 1;
    star = 1;
    space = userInput - marker;
    printf("\n");

    for (i = 1; i <= userInput * userInput + userInput - 1; i++)
    {
        if (marker <= userInput)
        {
            if (star > 0)
            {
                printf(" ");
                star = star - 1;
            }
            else if (space > 0)
            {
                printf("*");
                space = space - 1;
            }
            else if (space == 0 && star == 0)
            {
                printf("\n");
                marker = marker + 1;
                star = marker;
                space = userInput - marker;
            }

            if (marker == userInput)
            {
                star = 1;
                space = marker - 1;
            }
        }
    }
    return 0;
}