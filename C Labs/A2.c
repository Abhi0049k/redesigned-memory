// C program to find biggest of three number using nested if statement.

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     printf("Enter third number: ");
//     scanf("%d", &c);
//     if (a > b)
//     {
//         if (a > c)
//         {
//             printf("Biggest number: %d\n", a);
//         }
//         else
//         {
//             printf("Biggest number: %d\n", c);
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             printf("Biggest number: %d\n", b);
//         }
//         else
//         {
//             printf("Biggest number: %d\n", c);
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers separated by a space: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest;
    if (a >= b)
    {
        if (a >= c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else
    {
        if (b >= c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }
    }
    printf("Biggest Number: %d\n", largest);
    return 0;
}