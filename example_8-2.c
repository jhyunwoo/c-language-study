#include <stdio.h>

float Average(float x, float y);

int main(void){
    float num1, num2, result;

    printf("실수 2개를 입력하세요 : ");
    scanf("%f %f", &num1, &num2);

    result = Average(num1, num2);
    printf("두 실수의 평균 : %f\n", result);

    return 0;
}

float Average(float x, float y){
    return (x + y) / 2;
}