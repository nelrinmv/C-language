#include <stdio.h>

int main(){
    float f, c;

    printf("Enter the temprature in F: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("The temprature in C: %f",c);

    return 0;
}