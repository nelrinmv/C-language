#include <stdio.h>

int main(){
    float r, a, p;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = 3.14 * r * r;
    printf("\nThe area of the circle is %f units square.",a);

    p = 2 * 3.14 * r;
    printf("\nThe circumference of the circle is %f units.",p);

    return 0;
}
