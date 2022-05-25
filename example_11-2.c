#include <stdio.h>

struct list {
    char name;
    char gender;
    int age;
};

int main(void){
    struct list st1, st2;
    st1.name = 'T';
    st1.gender = 'M';
    st1.age = 25;

    st2.name = 'S';
    st2.gender = 'F';
    st2.age = 28;

    printf("이름 성별 나이\n");
    printf("-----------------\n");
    printf(" %c    %c    %d\n", st1.name, st1.gender, st1.age);
    printf(" %c    %c    %d\n", st2.name, st2.gender, st2.age);

    return 0;
}