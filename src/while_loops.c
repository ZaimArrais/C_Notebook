#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {

    /*
    int num = 0;
    while (num <= 0) {
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);
    }*/

    /*do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);
    } while (num <= 0);*/

    /*char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (strlen(name) == 0) {
        printf("Name cannot be empty. Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    }

    printf("Hello, %s!\n", name);*/

    bool isValid = true;
    char response = '\0';

    while (isValid) {
        printf("GAME OVER\n");
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &response); 

        if (response != 'Y' && response != 'y'){
            isValid = false;
        } 
    }

    printf("You have exited the game!");

    return 0;
}