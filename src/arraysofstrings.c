#include <stdio.h>
#include <string.h>

int main () {

    //Array of Strings - conceptually similar to 2D Arrays

    /*char sport[][11] = {
        {'B', 'a', 's', 'k', 'e', 't', 'b', 'a', 'l', 'l', '\0'},
        {'F', 'o', 'o', 't', 'b', 'a', 'l', 'l', '\0', '\0', '\0'},
        {'R', 'u', 'g', 'b', 'y', '\0', '\0', '\0', '\0', '\0', '\0'}
    };*/ // 2D array of characters, data is stored in contiguous blocks of memory

    /*char sports[][12] = {"Basketball", 
                         "Football", 
                         "Rugby", 
                         "Tennis", 
                         "Chess"}; // each of these strings can be a different memory location

    int size = sizeof(sports) / sizeof(sports[0]);

    sports[0][0] = 'e';
    sports[0][9] = 't';

    for(int i = 0; i < size; i++) {
        printf("%s\n", sports[i]);

    }*/

    // Exercise

    char names[5][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++) {
            printf("Enter a name: ");
            fgets(names[i], sizeof(names[i]), stdin);
            names[i][strcspn(names[i], "\n")]  = '\0';
    }

    for (int i = 0; i < rows; i++) {
        printf("%s\n", names[i]); 
    }

    return 0;
}