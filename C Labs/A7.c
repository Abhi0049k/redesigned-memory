//  C program to print and count prime numbers from 2 to n.

#include <stdio.h>

int callPrime(int n);

int main()
{
    int n;
    int count = 0;
    printf("Enter a number(greater than or equal to 2): ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        count += callPrime(i);
    }
    printf("Count of prime number is: %d", count);
    return 0;
}

int callPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Number: %d, is not prime\n", n);
            return 0;
        }
    }
    printf("Number: %d, is prime\n", n);
    return 1;
}