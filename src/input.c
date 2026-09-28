#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
// \0 - Null Terminator
    int level = rand() % 100 + 1;
    float xp = rand() % 1000 + 1.0f;
    char faction[30];
    char username[20];
    char input[2];
    int choice;

    printf("Enter your username: ");

    if (fgets(username, sizeof(username), stdin) != NULL) {
        username[strcspn(username, "\n")] = '\0';
        printf ("Username: %s! \n", username);
    } 
    else {
        printf("Error reading input.\n");
    }

    printf("Choose your faction: \n");
    printf("1. Alliance\n");
    printf("2. Empire\n");
    printf("3. Guild\n");

    if (fgets(input, sizeof(input), stdin) != NULL) {
        if(sscanf(input, "%d", &choice) == 1) {
            switch (choice) {
                case 1:
                    strcpy(faction, "Alliance");
                    printf("You have chosen the Alliance faction.\n");
                    break;
                case 2:
                    strcpy(faction, "Empire");
                    printf("You have chosen the Empire faction.\n");
                    break;
                case 3:
                    strcpy(faction, "Guild");
                    printf("You have chosen the Guild faction.\n");
                    break;

                default:
                    printf("Invalid choice. Please enter a number between 1 and 3.\n");
                    break;
            }
        }
        else {
            printf("Invalid input. Please enter a number.\n");
        }
    } 

    printf("------------------------------\n");
    printf("Username: %s\n", username);
    printf("Faction: %s\n", faction);
    printf("Level: %d\n", level);
    printf("XP: %.f / 1000 \n", xp);
    printf("------------------------------\n");

    return 0;
}