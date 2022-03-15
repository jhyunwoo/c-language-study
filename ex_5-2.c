#include <stdio.h>
int main(void)
{
    int score;

    printf("0점에서 100점 사이의 점수를 입력하세요.\n");
    scanf("%d", &score);

    if (score >= 0 && score <= 100)
    {
        printf("입력한 점수는 %d점입니다.\n", score);
    }
    else
    {
        printf("0점에서 100점 사이를 입력하셔야 합니다.\n");
    }

    if (score >= 0 && score < 60)
    {
        printf("%d점은 F학점입니다.\n", score);
    }
    else if (score >= 60 && score < 70)
    {
        printf("%d점은 D학점입니다.\n", score);
    }
    else if (score >= 70 && score < 80)
    {
        printf("%d점은 C학점입니다.\n", score);
    }
    else if (score >= 80 && score < 90)
    {
        printf("%d점은 B학점입니다.\n", score);
    }
    else if (score >= 90 && score <= 100)
    {
        printf("%d점은 A학점입니다.\n", score);
    }

    return 0;
}