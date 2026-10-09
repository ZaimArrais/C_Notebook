#include <stdio.h>

typedef enum{
    SUNDAY = 1, 
    MONDAY = 2, 
    TUESDAY = 3, 
    WEDNESDAY = 4, 
    THURSDAY = 5, 
    FRIDAY = 6, 
    SATURDAY = 7
}Day;

typedef enum{
    SUCCESS,
    FAILURE,
    PENDING
}Status;

void connectStatus (Status status);

int main () {

    //enum = A user-defined data type that consists of a set of named integer constants.
    //       Benefit: Replaces numbers with readable names.
    // SUNDAY = 0;
    // MONDAY = 1;
    // TUESDAY = 2;

    /*Day today = SUNDAY;

    if (today == SUNDAY || today == SATURDAY) {
        printf("It's the weekend!");
    }   else {
        printf("It's a weekday!");
    }*/

    Status status = PENDING;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status){

    switch (status) {
        case SUCCESS:
        printf("Connection Successful!\n");
        break;
        case FAILURE:
        printf("Connection Failed!\n");
        break;
        case PENDING:
        printf("Connection Pending...\n");
        break;
    }

}