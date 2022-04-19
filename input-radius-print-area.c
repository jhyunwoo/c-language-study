#include <stdio.h>

float Area(float a);

int main(void){
    float input;

    printf("input radius: ");
    scanf("%f", &input);

    printf("%f\n", Area(input));
}

float Area(float a){
    return a * a * 3.14;
}