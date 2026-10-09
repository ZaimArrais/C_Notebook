#include <stdio.h>
#include <stdbool.h>

int main () {

    // Ternary operator ? = shorthand for if-else statements
    // Example = (condition) ? value_if_true : value_if_false;

    /*int x = 18;
    int y = 22;
    int max = (x > y) ? x : y;*/
    
    /*bool isSunny = true;
    printf("%s", (isSunny) ? "Sunny!" : "Cloudy!");*/

    /*int number = 6;
    printf("%d is %s", number, (number % 2 == 0) ? "Even" : "Odd");*/

    /*int age = 29;
    printf("%s", (age > 18) ? "Adult" : "Minor");*/

    int hours = 21;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}