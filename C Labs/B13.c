// C program to read and write information of an employee using a file

#include <stdio.h>

struct employee
{
    int empId;
    char name[100];
    double salary;
};

int main()
{
    struct employee e1 = {1, "Mangalam", 13500};
    FILE *fptr;
    fptr = fopen("Emp.txt", "w");
    fprintf(fptr, "Employee Id: %d\n", e1.empId);
    fprintf(fptr, "Student Name: %s\n", e1.name);
    fprintf(fptr, "Employee Salary: %.2lf\n", e1.salary);
    fclose(fptr);
    fptr = fopen("Emp.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}