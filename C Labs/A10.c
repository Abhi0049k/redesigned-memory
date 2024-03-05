//  C program to convert binary number to decimal number.

#include <stdio.h>
#include <math.h>

int main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    double decimalNumber = 0;
    int i = 0;
    while (binary > 0)
    {
        int digit = binary % 10;
        // printf("%d", digit);
        binary /= 10;
        decimalNumber += (digit * (pow(2, i)));
        i++;
    }
    printf("%.0lf", decimalNumber);
    return 0;
}