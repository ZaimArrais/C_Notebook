#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main () {

    //typedef = reserved keyword that gives an existing datatype a nickname.
    //          Helps simplify complex types and improves code readibility.
    //          typedef existing_type new_name;

    /*Number x = 5;
    Number y = 8;
    Number z = x + y;
    printf("%d", z);*/

    Initials user1 = "JD";
    Initials user2 = "RS";
    Initials user3 = "MJ";
    Initials user4 = "CK";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}