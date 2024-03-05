// C program to check whether given number is Fibonacci or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int first = 0;
    int second = 1;
    if (n == first || n == second)
    {
        printf("Number is a Fibonacci");
        return 0;
    }
    while (1)
    {
        int third = first + second;
        if (third == n)
        {
            printf("Number is a Fibonacci");
            return 0;
        }
        if (third > n)
            break;
        first = second;
        second = third;
    }
    printf("Number is not a fibonacci");
    return 0;
}