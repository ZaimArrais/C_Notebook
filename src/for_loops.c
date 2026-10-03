#include <stdio.h>
#include <windows.h> //- Windows
//#include <unistd.h> - Linux/Mac

int main () {

    //for loop = for(Initialization; Condition; Update)

    for (int i = 10; i > 0; i-=1) {
        Sleep(1000);
        printf("%d\n", i);

    }

    printf("WOOOOO!!!!");

    return 0;
}