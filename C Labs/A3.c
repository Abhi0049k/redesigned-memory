//  C program to find sum of the S=12 +22+32+................+n2 indirect method using looping statement

#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    printf("Sum of series is: %.2lf", sum);
    return 0;
}