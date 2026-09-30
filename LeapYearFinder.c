#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if (year % 4 == 0){
        if (year % 100 != 0){
            printf("The year entered by the user is a leap year.");
        } else{
            printf("The year entered by the user is not leap year.");
        };
    } else{
        printf("The year entered by the user is not leap year.");
    };
    return 0;
}