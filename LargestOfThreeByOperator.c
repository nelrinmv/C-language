#include <stdio.h>

int main(){
    int a, b, c, largest;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b){
        largest = (a>c)?a:c;
        printf("The largest number is: %d",largest);
    } else{
        largest = (b>c)?b:c;
        printf("The largest number is: %d",largest);
    };
    return 0;
}