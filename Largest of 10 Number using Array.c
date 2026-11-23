#include <stdio.h>

int main(){
    int i, j, largest = 0;
    int num[10];

    printf("Enter the 10 numbers for which you want to find out the largest: ");
    
    for (i = 0; i < 10; i++){
        scanf("%d",&num[i]);
    };

    for (i = 0; i < 10; i++){
        largest == num[i];
        for (j = 0; j < 10; j++){
            if (largest > num[j]){
                printf("Yes %d is greatest in the array.",num[i]);
            } else{
                printf("No %d is not greatest in the array.",num[i]);
            }
        };
    };
    
    return 0;
}