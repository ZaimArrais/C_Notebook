#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) {
    printf("\nHappy birthday to you!\n");
    printf("\nHappy birthday to you!\n");
    printf("\nHappy birthday dear %s!\n", name);
    printf("\nHappy birthday to you!\n");
    printf("\nYou are now %d years old!\n", age);
}

int main () {

    //function = A reusable section of code that can be invoked.
    //parameter = A value the function expects to receive when it is called.
    //argument = A value that is sent to the function when it is called.

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}