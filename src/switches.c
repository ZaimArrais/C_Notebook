#include <stdio.h>

int main() {

    // An alternative to many if-else statements, more efficient w/ fixed integer values

    char dayOfWeek = '\0';

    printf("Enter a character for the day of the week (M, T, W, R, F, S, U): ");
    scanf(" %c", &dayOfWeek);

    switch (dayOfWeek) {

        case 'M':
        printf("Monday\n");
        break;

        case 'T':
        printf("Tuesday\n");
        break;

        case 'W':
        printf("Wednesday\n");
        break;

        case 'R':
        printf("Thursday\n");
        break;

        case 'F':
        printf("Friday\n");
        break;

        case 'S':
        printf("Saturday\n");
        break;

        case 'U':
        printf("Sunday\n");
        break;

        default:
        printf("Invalid day of the week\n");
    }

    return 0;
}