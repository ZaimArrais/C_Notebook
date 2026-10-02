#include <stdio.h>

int getMax (int x, int y) {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int main () {

    int max = getMax(15, 6);

    printf("The maximum value is: %d\n", max);

    return 0;
}