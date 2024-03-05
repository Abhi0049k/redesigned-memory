// C program to find factorial of a number using recursive function

#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}