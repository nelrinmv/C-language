#include <stdio.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the alphabet letter to search: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The letter '%c' exists in the string.\n", ch);
    } else {
        printf("The letter '%c' does not exist in the string.\n", ch);
    }

    return 0;
}