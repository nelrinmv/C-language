#include <stdio.h>

int main(){
    float l, b, area, peri;
    
    printf("Enter the Length of Rectangle: ");
    scanf("%f",&l);
    printf("Enter the Breath of Rectangle: ");
    scanf("%f",&b);
    
    area = l * b;
    printf("\nThe Area of the rectangle is: %f",area);

    peri = 2 * l * b * (l + b);
    printf("\nThe Perimeter of the rectangle is: %f\n",peri);

    return 0;
}