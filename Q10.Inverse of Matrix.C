#include <stdio.h>

int main() {
    float a[3][3], det = 0;
    int i, j;
    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &a[i][j]);
        };
    };
    for (i = 0; i < 3; i++) {
        det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
    };
    if (det == 0) {
        printf("Inverse does not exist (determinant is 0).\n");
        return 0;
    };
    printf("\nInverse of the matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            float cofactor = (a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3]) -
                             (a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3]);
            printf("%.2f\t", cofactor / det);
        };
        printf("\n");
    };
    return 0;
}