// Structures: a collection of values of different data types also known as structs.
// Each variable in the structure is known as a member of the structure.

// Syntax:
// struct MyStructure {   // Structure declaration
//   int myNum;           // Member (int variable)
//   char myLetter;       // Member (char variable)
// }; // End the structure with a semicolon
// Structures are stored in contiguous memory location.
// Structures are call by value

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main()
// {
//     struct student s1;
//     s1.roll = 1234;
//     s1.cgpa = 9.5;
//     // s1.name = "Mangalam"; // This will not because it is defined using array notation
//     strcpy(s1.name, "Mangalam");

//     printf("Roll: %d \n", s1.roll);
//     printf("CGPA: %.2f \n", s1.cgpa);
//     printf("Name: %s \n", s1.name);
//     return 0;
// }

// int main()
// {
//     struct student ECE[100];
//     struct student COE[100];
//     struct student IT[100];
//     // To Access
//     // IT[0].roll = 200;
//     // IT[0].cgpa = 9.8;
//     struct student st1 = {"Mangalam", 14, 9.0};
//     printf("%d %s %.2f\n", st1.roll, st1.name, st1.cgpa);
//     struct student *ptr = &st1;
//     // printf("Students roll = %d\n", (*ptr).roll);
//     printf("Students roll = %d\n", ptr->roll); // This is the arrow operator
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printInfo(struct student s1);

// int main()
// {
//     struct student s1 = {14, 9.32, "a"};

//     printInfo(s1);
//     return 0;
// }

// void printInfo(struct student s1)
// {
//     printf("%d %s %.2f\n", s1.roll, s1.name, s1.cgpa);
// }
// ==============================================================================

// typedef:
// used to create alias for data types

// #include <stdio.h>
// #include <string.h>

// typedef struct ComputerEngineeringStudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

// int main()
// {
//     coe s1 = {32, 7.8, 'a'};
//     printf("%d %s %.1f\n", s1.roll, s1.name, s1.cgpa);
//     return 0;
// }

// Problem: Enter address(house no, block, city, state) of 5 people.

#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address add);

int main()
{
    struct address adds[5];
    printf("Enter info for person 1: \n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);
    printf("Enter info for person 2: \n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);
    printf("Enter info for person 3: \n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);
    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    return 0;
}

void printAddress(struct address add)
{
    printf("address is: %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}