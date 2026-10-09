#include <stdio.h>

int main(){
    float km, m, cm, mm, feet, inch;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    
    m = km * 1000;
    printf("\nThe distance in meters is : %f",m);
    cm = m * 100;
    printf("\nThe distance in cetimeters is : %f",cm);
    mm = cm * 10;
    printf("\nThe distance in millimeters is : %f",mm);
    feet = km * 3280.8399;
    printf("\nThe distance in feet is : %f",feet);
    inch = km * 39370.0787;
    printf("\nThe distance in inches is : %f",inch);
    
    return 0;
}