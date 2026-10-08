#include <stdio.h>

int main(){
    int num, t1 = 0, t2 = 1, sum = 0, i =1;
    printf("Enter the number of terms for which the sum is required: ");
    scanf("%d",&num);
    while (i <= num){
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        i = i + 1;
    };
    printf("The sum of the first %d terms is %d.",num,sum-1);
    return 0;
}