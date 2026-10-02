#include <stdio.h>
#include <stdbool.h>

int main () {

    // && - AND
    // || - OR
    // ! - NOT

    /*int temp = 2;

    if (temp > 0 && temp < 30) {
        printf("The temperature is okay.\n");
    }
    else {
        printf("The temperature is bad.\n");
    }

    if (temp <= 0 || temp >= 30) {
        printf("The temperature is bad.\n");
    }
    else {
        printf("The temperature is okay.\n");
    }*/

    bool isSunny = false;

    if (!isSunny) {
        printf("The weather is cloudy.\n");
    }
    else {
        printf("The weather is sunny.\n");
    }

    return 0;
}