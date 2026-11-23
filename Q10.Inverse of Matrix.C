#include <stdio.h>

int main() {
    int i, j, k, l, m, n;
    int a[100][100], b[100][100], inv[100][100];

    printf("Enter the Order Of Matrix: ");
    scanf("%d %d",&k,&l);

    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            printf("Enter the Value of element a%d%d : ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}