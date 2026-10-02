#include <stdio.h>
#include <math.h>

int main () {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("CALCULATOR PROGRAM\n");
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        //Addition
        case '+':
        result = num1 + num2;
        break;
        //Subtraction
        case '-':
        result = num1 - num2;
        break;
        //Multiplication
        case '*':
        result = num1 * num2;
        break;
        //Division
        case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        break;
        //Exponentiation
        case '^':
        result = pow(num1, num2);
        break;

        default:
        printf("Error: Invalid operator.\n");
    }

    printf("Result: %.3lf\n", result);

    return 0;
}