#include <stdio.h>

enum Week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Week today = Wednesday;

    printf("Day number: %d\n", today);

    if (today == Wednesday) {
        printf("It is mid-week!\n");
    }

    return 0;
}