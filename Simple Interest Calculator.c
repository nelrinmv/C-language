#include <stdio.h>

int main(){
    float si,p,r,t;
    printf("Enter the Value of p: ");
    scanf("%f",&p);
    printf("Enter the Value of r: ");
    scanf("%f",&r);
    printf("Enter the Value of t: ");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The SI for the folloein values id %f", si);
    return 0;    
}