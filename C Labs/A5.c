// C program to find sum of the S=1+1/x+1/x2
// ..............series upto 4 decimal places of accuracy.

#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    int x, n;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum += 1 / pow(x, i);
    }
    printf("Sum of series for n element is: %.4lf", sum);
    return 0;
}