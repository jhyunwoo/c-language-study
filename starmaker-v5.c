#include <stdio.h>

int main(void)
{
    int i, j, star, space, userInput;
    int marker = 1;
    printf("roop time: ");
    scanf("%d", &userInput);

    star = 1;
    space = userInput - marker;

    for (i = 1; i < 2 * userInput * userInput - userInput + 1; i++)
    {
        if (marker < userInput)
        {
            if (star > 0)
            {
                printf("*");
                star = star - 1;
            }
            else if (space > 0)
            {
                printf("M");
                space = space - 1;
            }
            else
            {
                printf("\n");
                marker = marker + 1;
                star = marker;
                space = userInput - marker;
            }
            if (marker == userInput)
            {
                star = userInput - 1;
                space = 1;
            }
        }

        else
        {

            if (space > 0)
            {
                printf("M");
                space = space - 1;
            }
            else if (star > 0)
            {
                printf("*");
                star = star - 1;
            }
            else
            {
                printf("\n");
                marker = marker + 1;
                star = 2 * userInput - marker;
                space = marker - userInput;
            }
        }
    }
}