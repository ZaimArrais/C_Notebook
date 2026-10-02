#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age) {

    if (age >= 18) {
        return true;
    }
    else {
        return false;
    }
}

int main () {

    int age = 19;

    if (ageCheck(age)) {
        printf("You are old enough to vote.\n");
    }
    else {
        printf("You are not old enough to vote.\n");
    }

    return 0;
}