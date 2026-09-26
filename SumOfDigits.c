#include <stdio.h>

int main(){
    int userinput, temp, sum = 0;
    printf("Enter a Number: ");
    scanf("%d",&userinput);
    while (userinput > 0){
        temp = userinput % 10;
        sum = sum + temp;
        userinput = userinput / 10;
    };
    printf("\nSum of Digits: %d", sum);
    return 0;
}