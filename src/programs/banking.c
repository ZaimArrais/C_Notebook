#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main () {

    int choice = 0;
    float balance = 0.0f;

    printf("---MAYBANK---\n");

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: \n");
        scanf("%d", &choice);
    
        switch (choice) {
            case 1:
                checkBalance(balance);
            break;
            case 2:
                balance += deposit();
            break;
            case 3:
                balance -= withdraw(balance);
            break;
            case 4:
                printf("Thank you for using our services.\n");
                printf("Have a nice day!\n");
            break;
            default:
                printf("Invalid choice! Please select (1-4)\n");
        }

    } while (choice != 4);



    return 0;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: MYR%.2f\n", balance);
}

float deposit() {
    
    float amount = 0.0f;

    printf("\nEnter deposit amount: MYR");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    } else {
        printf("Successfully deposited MYR%.2f\n", amount);
        return amount;
    }
}

float withdraw(float balance) {
    
    float amount = 0.0f;

    printf("\nEnter withdraw amount: MYR");
    scanf("%f", &amount);

    if (amount < 0) {
        printf("Invalid ammount\n");
        return 0.0f;
    } else if (balance < amount) {
        printf("Insufficient Funds! Your balance is MYR%.2f\n", balance);
        return 0.0f;
    } else {
        printf("Successfully withdrew MYR%.2f\n", amount);
        return amount;
    }

}