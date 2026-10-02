#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); //function prototype
bool ageCheck(int age);

int main() {
    
    //Function prototype = Declaration of a function that informs the compiler about the function's name, 
    //return type, and parameters before its actual definition. Enables type checking and allows functions to be called before they are defined.
    //Improving readibility and organization of code, especially in larger projects.

    hello("Das", 25);

    if (ageCheck(25)) {
        printf("You are old enough to vote!\n");
    } else {
        printf("You must be 21 years old to vote!\n");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s!\n", name);
    printf("You are %d years old!\n", age);
}

bool ageCheck(int age) {
    return age >= 21;
}