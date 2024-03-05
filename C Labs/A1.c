//  C program for given two numbers to perform arithmetic operations using switch statement.

#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '%':
        printf("%d", a % b);
        break;
    default:
        printf("Invalid operation");
        break;
    }
    printf("\n");
    return 0;
}