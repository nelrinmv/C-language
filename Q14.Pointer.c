#include <stdio.h>

int main() {
    int cat = 61;   // Actual variable declaration 
    int *ip1;        // Pointer variable declaration

    ip1 = &cat;      // Store address of var in pointer variable 
    
    printf("Address of variable cat: %x\n", &cat);
    printf("Address stored in ip1 variable: %p\n", ip1);
    printf("Value of *ip1 variable: %d\n", *ip1);  

    return 0; 
}