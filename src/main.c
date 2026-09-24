#include <stdio.h>

int main () {

    /* Format Specifier = Special tokens that begin with % symbol, 
    followed by character of data type and optional modifiers.
    Controls how data is displayed or interpreted. */

    /*int age = 25;
    float price = 19.90;
    double pi = 3.1415926535;

    char currency = '$';
    char name[] = "Ren";

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%.3lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);*/

    //optional modifiers: width, precision, flags, length
    /*int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);*/

    float price1 = 19.90;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%10.2f\n", price1);
    printf("%10.2f\n", price2); 
    printf("%10.2f\n", price3);

    return 0;
}