// C program to find sum of the S=1-2+3-4+5……….+n series by indirect method using looping
// statement

#include <stdio.h>

int main()
{
    double sum = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    printf("Sum of series is: %.1lf", sum);
    return 0;
}