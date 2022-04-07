#include <stdio.h>
int main(void)
{
    int input;
    printf("양수를 입력하세요.\n");
    scanf("%d", &input);
    if (input >= 0 && input % 2 == 0)
    {
        printf("입력한 수 %d는 양수이며 짝수입니다.", input);
    }
    else if (input >= 0 && input % 2 != 0)
    {
        printf("입력한 수 %d는 양수이며 홀수입니다.", input);
    }
    else
    {
        printf("입력한 수 %d는 음수입니다.", input);
    }
    return 0;
}