#include <stdio.h>

int main() {

    //2D Array = An array where each element is an array, useful if you need a matrix or grid of data
    //           array[][] = {{}, {}, {}};

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'4', '5', '6'},
                        {'*', '0', '#'}};

    /*printf("%d ", numbers[0][0]);
    printf("%d ", numbers[0][1]);
    printf("%d\n", numbers[0][2]);

    printf("%d ", numbers[1][0]);
    printf("%d ", numbers[1][1]);
    printf("%d\n", numbers[1][2]);

    printf("%d ", numbers[2][0]);
    printf("%d ", numbers[2][1]);
    printf("%d\n", numbers[2][2]);*/

    for(int i = 0; i < 4; i++) { //rows
        for(int j = 0; j < 3; j++) { //columns
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}