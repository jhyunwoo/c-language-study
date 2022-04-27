#include <stdio.h>

int* hightToLow(int Array[], int Size){
    int i, j, c, d;
    for(i = 0; i<Size; i++){

        for(j = 1; j<= Size; j++){
            c = Array[j-1];
            d = Array[j];
            if(c < d){
                Array[j-1] = d;
                Array[j] = c;
            }
        }
    }
    return Array;
}

int main(void){
    int range, i, b;
    printf("int num under 10: ");
    scanf("%d", &range);
    int a[range];

    printf("input %d numbers\n", range);
    for(i = 0; i < range; i++){
        scanf("%d", &b);
        a[i] = b;
    }
    int c[range];
    hightToLow(a, range);
    
    for(i = 0; i < range; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}