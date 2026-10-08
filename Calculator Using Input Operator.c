#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d", &a, &b);
    char op;
    printf("Enter the operation that you want to apply: ");
    scanf(" %c", &op);
    switch (op){
        case '+':
            printf("The sum of the number is %d", a + b);
            break;
        case '-':
            printf("The Subtraction of the number is %d", a - b);
            break;
        default:
            printf("The operation input is incorrect.");
            break;
    };
    return 0;
}