#include <stdio.h>
#include <math.h>

// Methord 1 ->
int main(){
    int a, b, c;
    float d, r1, r2;
    printf("Enter the values of a,b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0){
        r1 = (-b + sqrt(d))/(2 * a);
        r2 = (-b - sqrt(d))/(2 * a);
        printf("The roots of the equation %dx^2 + %dx + %d = 0 are %f and %f", a, b, c, r1, r2);
    } else if (d == 0){
        r1 = (-b)/(2 * a);
        r2 = (-b)/(2 * a);
        printf("The roots of the equation %dx^2 + %dx + %d = 0 are %f and %f", a, b, c, r1, r2);
    } else {
        printf("The roots of the equation are imaginary.");
    };
    return 0;
}

// // Method 2 ->
// int main(){
//     int a, b, c;
//     float d, r1, r2;
//     printf("Enter the values of a,b and c respectively: ");
//     scanf("%d %d %d", &a, &b, &c);
//     d = (b * b) - (4 * a * c);
//     if (d > 0){
//         r1 = (-b + sqrt(d))/(2 * a);
//         r2 = (-b - sqrt(d))/(2 * a);
//         printf("The roots of the equation %dx^2 + %dx + %d = 0 are %f and %f", a, b, c, r1, r2);
//     } else {
//         if (d == 0){
//             r1 = (-b)/(2 * a);
//             r2 = (-b)/(2 * a);
//             printf("The roots of the equation %dx^2 + %dx + %d = 0 are %f and %f", a, b, c, r1, r2);
//         } else {
//             printf("The roots of the equation are imaginary.");
//         };
//     };
//     return 0;
// }