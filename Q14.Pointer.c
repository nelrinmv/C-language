#include <stdio.h>

int main() {
    int ipadd = 61;  
    int *ip;    

    ip = &ipadd;     
    
    printf("Address of variable ipadd: %x\n", &ipadd);
    printf("Address stored in ip variable: %x\n", ip);
    printf("Value of *ip variable: %d\n", *ip);  

    return 0; 
}