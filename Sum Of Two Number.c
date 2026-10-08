#include <stdio.h>

int main(){
    // declearation of variables
    int n1, n2, sum;

    // taking user input
    printf("\nEnter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    // addition of number
    sum = n1 + n2;
    printf("\nThe sum of the two number is %d",sum);
    return 0;
}