#include <stdio.h>
#include <string.h>

int main () {

    char item[50];
    float price = 0.0f;
    char priceInput[20];
    int quantity = 0;
    char currency[4] = "MYR";
    float total = 0.0f;

    printf("What item would you like to purchase?: ");
    if (fgets(item, sizeof(item), stdin) != NULL) {
        item[strcspn(item, "\n")] = '\0';
        printf("Item: %s\n", item); 
    } else {
        printf("Error reading input.\n");
    }

    while (1) {
        printf("Enter the price of the item: ");

        if (fgets(priceInput, sizeof(priceInput), stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }

        priceInput[strcspn(priceInput, "\n")] = '\0';

        if(sscanf(priceInput, "%f", &price) != 1) {
            printf("Invalid price. Please enter a valid number.\n");
            continue;
        }

        if (price < 0) {
            printf("Price cannot be a negative number. Please enter a valid price.\n");
            continue;
        } 

        char *decimal = strchr(priceInput, '.');

        if (decimal != NULL && strlen(decimal + 1) > 2) {
            printf("Price can only have up to 2 decimal places.\n");
            continue;
        }
        break;
    }

    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity);

    while (quantity < 0) {
        printf("Quantity cannot be a negative number. Please enter a valid quantity:");
        scanf("%d", &quantity);
    }

    total = price * quantity;
    printf("Total cost of %d %s(s) is: %.2f %s\n", quantity, item, total, currency);

    return 0;
}