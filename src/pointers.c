#include <stdio.h>

void birthday (int* age);

int main () {

    //pointers = A variable that stores the memory address of another variable.
    //           Benefit: Help avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the entire data.
    // (&) = gives the memory address
    // (*) = dereference operator
    int age = 25;
    int *pAge = &age; // Creates a pointer to hold a memory address.

    birthday(pAge);

    printf("You are %d years old!", age);

    return 0;
}   

void birthday (int* age) {
    //pass by reference
    (*age)++;
}