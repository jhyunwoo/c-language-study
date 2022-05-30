#include <stdio.h>

struct square{
    int x1;
    int y1;
    int x2;
    int y2;
};

typedef struct square sq;

int main(void){
    sq s1, s2, r;
    scanf("%d %d %d %d", &s1.x1, &s1.y1, &s1.x2, &s1.y2);
    scanf("%d %d %d %d", &s2.x1, &s2.y1, &s2.x2, &s2.y2);
    
    if(s1.x1<s2.x1){
        r.x1 = s1.x1;
    } else{
        r.x1 = s2.x1;
    }

    if(s1.y1<s2.y1){
        r.y1 = s1.y1;
    } else{
        r.y1 = s2.y1;
    }

    if(s1.x2>s2.x2){
        r.x2 = s1.x2;
    } else{
        r.x2 = s2.x2;
    }

    if(s1.y2>s2.y2){
        r.y2 = s1.y2;
    } else{
        r.y2 = s2.y2;
    }

    printf("%d %d %d %d\n", r.x1, r.y1, r.x2, r.y2);
    return 0;

}