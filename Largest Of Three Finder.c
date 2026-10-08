#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a, b and c respecitively: (a,b,c) = ");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b){
        if (a > c){
            printf("a is greater than b and c.");
        } else {
            printf("c is greater than a and b.");
        };
    } else {
        if (b > c){
            printf("b is greater than a and c.");
        } else {
            printf("c is greater than a and b.");
        };
    };
    return 0;
}