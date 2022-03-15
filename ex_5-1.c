#include <stdio.h>

int main(void)
{
    int input;
    printf("양수를 입력하세요.\n");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("안녕\n");
        printf("입력한 수 %d는 짝수입니다.\n", input);
    }

    else
    {
        printf("입력산 수 %d는 홀수입니다.\n", input);
    }

    return 0;
}