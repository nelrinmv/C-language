#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    float percentage;
};

int main() {
    struct student s[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 10; i++) {
        printf("Roll No: %d | Name: %s | Percentage: %.2f%%\n",
               s[i].roll_no, s[i].name, s[i].percentage);
    }

    return 0;
}