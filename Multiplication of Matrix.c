#include <stdio.h>

int main(){
    int i, j, k, r1, c1, r2, c2;
    int a[100][100], b[100][100], mul[100][100];

    printf("Enter the Order of Matrix One: ");
    scanf("%d %d",&r1, &c1);

    printf("Enter the Order of Matrix Two: ");
    scanf("%d %d",&r2, &c2);

    if (c1 == r2){
        for (i = 0; i < r1; i++){
            for (j = 0; j < c1; j++){
                printf("Enter the value of term a%d%d : ", i+1, j+1);
                scanf("%d", &a[i][j]);
            }

        }

        printf("\033[2J\033[H"); // Clear screen

        for (i = 0; i < r2; i++){
            for (j = 0; j < c2; j++){
                printf("Enter the value of term b%d%d : ", i+1, j+1);
                scanf("%d", &b[i][j]);
            }

        }

        printf("\033[2J\033[H"); // Clear screen
        
        for (i = 0; i < r2; i++){
            for (j = 0; j < c1; j++){
                for (k=0; k<c2; k++){
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        };
        
        printf("\nThe Product of Matrix: ");
        
        for (i = 0; i < r2; i++){
            for (j = 0; j < c1; j++){
                printf("%d\t", mul[i][j]);
                if (j == c1 -1){
                    printf("\n");
                };
            }
        }
        

    } else {
        printf("The multiplication of these matrix of these order is not possible.\n");
    };

    return 0;
}