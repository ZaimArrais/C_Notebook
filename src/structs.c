#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float cgpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main () {

        //struct = A custom container that holds multiple pieces of related information.
        //         Similar to objects in higher level languages.

    Student student1 = {"James", 26, 3.4, true};
    Student student2 = {0}; //Clears the memory from a previous program

    //How to assign values later
    //strncpy strcpy(student2.name, "Way", 5); // Copy a certain amount of characters
    strcpy(student2.name, "Way");
    student2.age = 22;
    student2.cgpa = 3.95;
    student2.isFullTime = false;

    printStudent(student1);
    printStudent(student2);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("CGPA: %.2f\n", student.cgpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}