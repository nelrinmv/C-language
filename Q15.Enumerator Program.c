#include <stdio.h>

enum Week { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    int day_num;
    enum Week today;

    printf("Enter a day number (1 for Sunday to 7 for Saturday): ");
    scanf("%d", &day_num);
    
    today = (enum Week)day_num;

    switch (today) {
        case Sunday:
            printf("Day %d is Sunday.\n", today);
            break;
        case Monday:
            printf("Day %d is Monday.\n", today);
            break;
        case Tuesday:
            printf("Day %d is Tuesday.\n", today);
            break;
        case Wednesday:
            printf("Day %d is Wednesday. It is mid-week!\n", today);
            break;
        case Thursday:
            printf("Day %d is Thursday.\n", today);
            break;
        case Friday:
            printf("Day %d is Friday.\n", today);
            break;
        case Saturday:
            printf("Day %d is Saturday.\n", today);
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}