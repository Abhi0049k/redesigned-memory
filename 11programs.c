// 1. Write a program to print the average of 3 numbers.
// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);
//     printf("%d", (a + b + c) / 3);
//     return 0;
// }

// 2. WAP to check if given character is digit or not.

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("Digit or not: %d", ch >= '0' && ch <= '9');
//     return 0;
// }

// 3. WAP to print the smallest number.

#include <stdio.h>

int main()
{
    double a, b;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    double smallest = (a > b) ? b : a;
    // printf("Smallest: %.2lf", smallest); // %.2lf will print only till 2 precisions after decimal
    printf("Smallest: %lf", smallest);
    return 0;
}