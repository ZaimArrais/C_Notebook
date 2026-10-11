#include <stdio.h>

int main () {

    //WRITE FILE

    FILE *pFile = fopen("Output.txt", "w");

    char text[] = "Windows 11 version 1.2\nBoot ACTIVATED!";

    if (pFile == NULL) {
        printf("ERROR OPENING FILE!\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!");

    fclose(pFile);

    return 0;
}