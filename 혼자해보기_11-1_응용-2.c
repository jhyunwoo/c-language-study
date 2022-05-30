#include <stdio.h>

struct user
{
    char name;
    char gender;
    int age;
};

int main(void){
    struct user us1;
    scanf("%c %c %d", &us1.name, &us1.gender, &us1.age);

    if(us1.gender == 'M'){
        printf("st1 객체는 이름이 %c, 성별이 남자, 나이가 %d이다.\n", us1.name, us1.age);
    } else if(us1.gender == 'F'){
        printf("st1 객체는 이름이 %c, 성별이 여자, 나이가 %d이다.\n", us1.name, us1.age);
    } else{
        printf("성별 정보 입력 오류\n");
    }
    return 0;
}
