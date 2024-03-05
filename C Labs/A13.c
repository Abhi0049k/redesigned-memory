//  C program to find the reverse of the given number. Also sum & count the number of digits and check
// whether the given number is palindrome or not palindrome

#include <stdio.h>

void digitSumCountAndPalin(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    digitSumCountAndPalin(n);

    return 0;
}

void digitSumCountAndPalin(int n)
{
    int original = n;
    int newN = 0;
    int len = 0;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
        len++;
        newN = newN * 10 + digit;
    }
    printf("Sum: %d\n", sum);
    printf("Digit count: %d\n", len);
    printf("isPalin: %d\n", newN == original);
}