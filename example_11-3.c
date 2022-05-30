#include <stdio.h>

struct list
{
    char name;
    char gender;
    int age;    
};

int main(void){
    struct list st1 = {'T', 'M', 25};
    struct list st2, st3 = {'P', 'F', 30};

    st2 = st1;
    st3.name = st1.name;
    st3.gender = st1.gender;

    printf("   이름 성별 나이\n");
    printf("-----------------------\n");

printf("st1  %c  %c  %d\n", st1.name, st1.gender, st1.age);
printf("st1  %c  %c  %d\n", st2.name, st2.gender, st2.age);    
printf("st1  %c  %c  %d\n", st3.name, st3.gender, st3.age);

return 0;
}
