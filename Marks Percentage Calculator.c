#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, total;

    printf("Enter marks in each subject: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    total = n1 + n2 + n3 + n4 + n5;

    printf("The marks percentage is: %f", (total / 500) * 100);

    return 0;
}