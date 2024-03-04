// Loops control instructions: To repeat some parts of the program
// Types: for, while, do-while

// For Loop: it is entry control loop
// Syntax: for(initialization, condition, updating){}
// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");
//     for (float i = 0; i <= 10; i++)
//     {
//         printf("%.1f ", i);
//     }
//     printf("\n");

//     return 0;
// }

// While Loop: it is entry control loop
// Syntax:
// initialization;
// while(condition){
//     statements;
//     updating;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d ", i);
//         i++;
//     }
//     return 0;
// }

// Do-While Loop: it is exit control loop
// Syntax:
// initialization;
// do{
//     updating;
// }while(condition);

// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     do
//     {
//         printf("%d \n", i);
//         i--;
//     } while (i > 5);
//     return 0;
// }

// Print the sum of first n natural number

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter value of n: ");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("Sum: %d", sum);
//     return 0;
// }

// Print this pattern n, n-1, n-2, ..., 1;

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int a = n;
    while (n > 0)
    {
        printf("%d ", n--);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}