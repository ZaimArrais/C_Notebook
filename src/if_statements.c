#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {

    /*
    int age = 0;
    char input[50];

    printf ("Enter your age: ");
    scanf ("%d", &age);

    if (age >= 65) {
        printf ("You are a senior citizen!\n");
    }
    else if (age >= 18) {
        printf ("You are an adult!\n");
    } 
    else if (age < 0) {
        printf ("You were not born yet!\n");
    }
    else if (age == 0) {
        printf("You are a newborn!\n");
    }
    else {
        printf ("You are a minor!\n");
    }
    */
    /*
    bool isRaining = false;

    if (isRaining) {
        printf ("It's raining, take an umbrella!\n");
    } else {
        printf ("It's not raining, enjoy your day!\n");
    }
    */

    char name[50] = "";

    printf ("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    if (strlen(name) == 0) {
        printf ("You didn't enter your name!\n");
    } else {
        printf ("Hello, %s!\n", name);
    }

    return 0;
}