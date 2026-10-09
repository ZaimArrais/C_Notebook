#include <stdio.h>

int main () {

    typedef struct {
        char model[25];
        int year;
        int price;
    }Car;

    //array of structs = Array where each element contains a struct {}
    //                   Helps organize and group together related data.

    Car cars[] = {{"Lamborghini", 2022, 1320000},
                  {"Corvette", 2026, 476000},
                  {"Porsche 911", 2024, 2290000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++) {
        printf("%s %d MYR%d\n\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}