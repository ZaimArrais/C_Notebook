#include <stdio.h>
#include <stdbool.h>

int main () {

    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true; // 20% discount

    if (isStudent) {
        if (isSenior) {
            printf("Student discount of 10%% applied and Senior discount of 20%% applied.\n");
            price *= 0.7; // Apply both discounts
        }
        else {
            printf("Student discount of 10%% applied.\n");
            price *= 0.9; // Apply a 10% discount for students
        }
    } 
    else {
        if(isSenior) {
            printf("Senior discount of 20%% applied.\n");
            price *= 0.8; // Apply a 20% discount for seniors
        }
        else {
            printf("No discounts applied.\n");
        }
    }

    printf("The price for a ticket is: $%.2f\n", price);

    return 0;
}