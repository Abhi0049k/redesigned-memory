// C program to generate Fibonacci series up to n numbers
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, ....

#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;
    int n;
    printf("Enter a Positive integer(greater than 2): ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    else if (n == 1)
    {
        printf("Fibonacci series up to 1 term: %d\n", first);
        return 0;
    }
    printf("%d %d ", first, second);
    for (int i = 2; i < n; i++)
    {
        int third = first + second;
        printf("%d ", third);
        first = second;
        second = third;
    }
    return 0;
}