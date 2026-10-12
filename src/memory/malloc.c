#include <stdio.h>
#include <stdlib.h>

int main () {

    //malloc(bytes) = A function that dynamically allocates a specified number of bytes in memory.

    int number = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }
    
    for (int i = 0; i < number; i++) {
        printf("%c ", grades[i]);
    }

    // (*) = a special key to our apartment
    free(grades); // returning rented (apt) memory space back to the operating system.
    grades = NULL; // avoid dangling pointers | returns the key

    return 0;
}