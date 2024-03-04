// jump Statements:
// 1. Break;
// 2. continue;

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             break;
//         }
//         if (i == 3)
//         {
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// Print Factorial of a number n;

#include <stdio.h>

int main()
{
    int fact = 1;
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    printf("Factorial: %d", fact);
    return 0;
}