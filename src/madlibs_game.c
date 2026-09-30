#include <stdio.h>
#include <string.h>

#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main () {

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): \n");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; 

    printf("Enter a noun (animal or person): \n");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; 

    printf("Enter an adjective (description): \n");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; 

    printf("Enter an verb (ending w/ -ing): \n");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; 

    printf("Please enter an adjective (description): \n");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Last night I had a " YELLOW "%s" RESET " dream. I saw a " YELLOW "%s" RESET " in a " YELLOW "%s" RESET " forest, " 
        YELLOW "%s" RESET " through the trees. It was a " YELLOW "%s" RESET " sight to behold!\n", 
        adjective1, noun, adjective2, verb, adjective3);

    return 0;
}