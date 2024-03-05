#include <stdio.h>
#include <string.h>

struct emp
{
    int empId;
    char name[100];
    double salary;
};

int main()
{
    struct emp e1;
    char n[100];
    printf("Enter the employee Id of the employee: ");
    scanf("%d", &e1.empId);
    printf("Enter name of the employee: ");
    scanf("%s", &n);
    strcpy(e1.name, n);
    printf("Enter the salary of the employee: ");
    scanf("%lf", &e1.salary);
    printf("EmpId: %d\nName: %s\nSalary: %.2lf", e1.empId, e1.name, e1.salary);
    return 0;
}