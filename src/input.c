#include <stdio.h>
#include <string.h>

int main () {

    int level = 0;
    float xp = 0.0f;
    char faction = '\0'; // \0 - Null Terminator
    char username[20];
 
    printf("Enter your username: ");

    if (fgets(username, sizeof(username), stdin) != NULL) {
        username[strcspn(username, "\n")] = '\0';
        printf ("Username: %s! \n", username);
    } 
    else {
        printf("Error reading input.\n");
    }

    printf("%d\n", level);
    printf("%f\n", xp);
    printf("%c\n", faction);
    printf("%s\n", username);

    return 0;
}