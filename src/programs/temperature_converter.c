#include <stdio.h>

int main() {

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Enter your choice (C or F): ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf ("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (choice == 'F' || choice == 'f') {
        printf ("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice. Please select C or F.\n");
        return 1;
    }

    return 0;
}