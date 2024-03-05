// C program to convert decimal number to binary number.

#include <stdio.h>

int main()
{
    int decimal;
    int binary[100];
    int i = 0;
    printf("Enter a decimal Number: ");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}