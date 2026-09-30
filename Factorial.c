#include <stdio.h>

int main(){
    int userinput, x, result;
    result = 1;
    printf("Enter a number: ");
    scanf("%d",&userinput);
    x = userinput;
    while (x > 0){
        result = result * x;
        x = x - 1;
    };
    printf("The factorial of %d! is %d",userinput,result);
}