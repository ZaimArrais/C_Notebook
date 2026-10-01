#include <stdio.h>
#include <math.h>

int main () {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;
    char input[50];

    printf("Enter the radius of the circle: ");

    if (fgets (input, sizeof(input), stdin) != NULL) {

        if (sscanf(input, "%lf", &radius) != 1) {
            printf("Error: Invalid input. Please enter a valid number for the radius.\n");
            return 1;
        }

        if (radius < 0) {
            printf ("Error: Radius cannot be a negative number. \n");
            return 1;
        } else {
            area = PI * pow(radius, 2);
            surfaceArea = 4 * PI * pow(radius, 2);
            volume = (4.0 / 3.0) * PI * pow(radius, 3);
        }
    }

    printf("Area of the circle: %.2lf cm^2\n", area);
    printf("Surface area of the sphere: %.2lf cm^2\n", surfaceArea);
    printf("Volume of the sphere: %.2lf cm^3\n", volume);

    return 0;
}