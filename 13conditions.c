// Conditions Statements:
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use ternary operator => condition ? doSomething if true : doSomething if false
// Use switch to specify many alternative blocks of code to be executed
// Nesting is possible in all condition statements

#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Ternary Operator\n");
    age >= 18 ? printf("Ready for voting \n") : printf("Prepare yourself for the examinations\n");
    printf("if-else-if Conditions\n");
    if (age >= 18)
        printf("Adult\n");
    else if (age >= 13 && age < 18)
        printf("Teenager\n");
    else
        printf("Neither an adult nor a teenager\n");
    int adult = age >= 18;
    printf("Switch Conditions\n");
    switch (adult)
    {
    case 0:
        printf("Not an Adult");
        break;
    case 1:
        printf("Adult");
        break;
    default:
        printf("Invalid Choice");
        break;
    }

    return 0;
}