#include <stdio.h>
int main(void)
{
    char grade;
    printf("등급을 영어 대문자로 입력하세요.\n");
    scanf("%s", &grade);
    if (grade == 'A')
    {
        printf("매우잘함\n");
    }

    else if (grade == 'B')
    {
        printf("잘함\n");
    }
    else if (grade == 'C')
    {
        printf("보통임\n");
    }
    else if (grade == 'D')
    {
        printf("노력요함\n");
    }
    else if (grade == 'F')
    {
        printf("낙제\n");
    }
    else
    {
        printf("입력한 문자가 영어 대문자가 아닙니다.\n");
    }
    return 0;
}