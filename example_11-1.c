#include <stdio.h>

struct list {
    char name;
    char gender;
    int age;
};

int main(void){
    struct list st1 = {'T', 'M', 25};

    printf("구조체 list의 크기는 %ld이다.\n", sizeof(struct list));
    printf("구조체 객체 st1의 크기는 %ld이다.\n", sizeof(st1));
    return 0;
}