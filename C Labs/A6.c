//  C program to check whether the given number is prime or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not a prime number");
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not a prime number");
            return 0;
        }
    }
    printf("Prime number");
    return 0;
}