#include <stdio.h>

struct user
{
    char name;
    char gender;
    int age;
};

int main(void){
    struct user u1;

    scanf("%c %c %d", &u1.name, &u1.gender, &u1.age);

    printf("st1객체는 이름이 %c, 성별이 %c, 나이가 %d이다.\n", u1.name, u1.gender, u1.age);
    return 0;
}
