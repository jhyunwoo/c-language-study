#include <stdio.h>

struct personData
{
    int tall;
    float weight;
};

int main(void){
    struct personData m, f, s;
    scanf("%d %f", &m.tall, &m.weight);
    scanf("%d %f", &f.tall, &f.weight);

    s.tall = (m.tall + f.tall)/2+5;
    s.weight = (m.weight + f.weight)/2-4.5;
    printf("%d %.1f\n", s.tall, s.weight);
    return 0;
}
