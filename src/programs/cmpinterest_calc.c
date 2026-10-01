#include <stdio.h>
#include <math.h>

int main () {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;
    char input[50];

    printf ("Compound Interest Calculator \n");


        // Principal amount
    printf ("Enter the principal amount (P): ");
    if (fgets (input, sizeof(input), stdin) == NULL) {
        printf("Error: Invalid input. Please enter a valid number for the principal amount.\n");
        return 1;
        }
    if (sscanf(input, "%lf", &principal) != 1) {
        printf("Error: Invalid input. Please enter a valid number for the principal amount.\n");
        return 1;
        }

        // Annual interest rate
    printf ("Enter the annual interest rate % (r): ");
        if (fgets (input, sizeof(input), stdin) == NULL) {
            printf("Error: Invalid input. Please enter a valid number for the annual interest rate.\n");
            return 1;
        }
        if (sscanf(input, "%lf", &rate) != 1) {
            printf("Error: Invalid input. Please enter a valid number for the annual interest rate.\n");
            return 1;
        }

        // Years
    printf ("Enter the No.# of years (t): ");
        if (fgets (input, sizeof(input), stdin) == NULL) {
            printf("Error: Invalid input. Please enter a valid number for the number of years.\n");
            return 1;
        }
        if (sscanf(input, "%d", &years) != 1) {
            printf("Error: Invalid input. Please enter a valid number for the number of years.\n");
            return 1;
        }

        // Compound interest
    printf ("Enter the number of times interest is compounded per year (n): ");
        if (fgets (input, sizeof(input), stdin) == NULL) {
            printf("Error: Invalid input, Please enter a valid number for the number of times interest is compounded per year.\n");
            return 1;
        }
        if (sscanf(input, "%d", &timesCompounded) != 1) {
            printf("Error: Invalid input. Please enter a valid number for the number of times interest is compounded per year.\n");
            return 1;
        }

        if (principal < 0 || rate < 0 || years < 0 || timesCompounded < 0) {
            printf("Error: All input values must be non-negative.\n");
            return 1;
        }

        rate = rate / 100; // Convert percentage
        total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

        printf("The total amount after %d years is: MYR%.2lf\n", years, total);

    return 0;
}