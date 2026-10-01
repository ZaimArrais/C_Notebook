#include <stdio.h>

int main() {

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf ("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462f;
        printf("Weight in pounds: %.2f\n", pounds);
    } else if (choice == 2) {
        printf ("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462f;
        printf("Weight in kilograms: %.2f\n", kilograms);
    } else {
        printf("Invalid choice. Please select 1 or 2.\n");
        return 1;
    }


    return 0;
}