#include <stdio.h>

struct students {
    char name[20];
    char address[30];
    int age;
};

typedef struct students student;

int main(void){
    student st1 = {"Moon Jae In", "Seoul", 25};
    struct students st2 = {"John", "London", 30};

    printf("학생 1은 성이 %s이고 %s에 살며 %d살이다.\n", st1.name, st1.address, st1.age);
    printf("학생 2은 성이 %s이고 %s에 살며 %d살이다.\n", st2.name, st2.address, st2.age);
    return 0;
}