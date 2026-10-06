#include <stdio.h>

int main () {

    //Array = Fixed-size collection of elements of the same data type (Like a variable that holds > 1 value)

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char name[] = "James";

    int size = sizeof(numbers) / sizeof(numbers[0]);


    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}