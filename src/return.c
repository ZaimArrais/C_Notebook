#include <stdio.h>

double cube(double num) {
    double result = num * num * num;
    return result;
}

double square(double num) {
    double result = num * num;
    return result;
}

int main () {

    double x = cube(2.4);
    double y = cube(3.6);
    double z = cube(4.8);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}