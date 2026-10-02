#include <stdio.h>

//int result = 0; //Global variable - Makes it harder to debug

int add (int x, int y) {
    int result = x + y;
    return result;
}

int subtract (int x, int y) {
    int result = x - y;
    return result;
}

int main () {

    //Variable Scope = Refers to where a variable is recognized and accesible. 
    //Variables can share the same name if they're in different scopes.

    //int result = add(3, 4);
    int result = subtract(10, 5);

    printf("The result is: %d\n", result);

    return 0;
}