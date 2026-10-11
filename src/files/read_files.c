#include <stdio.h>

int main () {

    //READ FILE

    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL) {
        printf("Couldn't open file!");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}