// Function : block of code that performs a particular task;
// Properties:
// Execution always starts from main;
// A function get called directly or indirectly from main
// There can be multiple functions in a program
// Syntax1:
// Function Prototype:
// #include <stdio.h>

// void printHello(); // declaration prototype or function prototype

// int main()
// {
//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// void printHello() // function definition
// {
//     printf("Hello, ");
//     printf("Welcome.\n");
// }

// Syntax2:

// #include <stdio.h>

// void printHello()
// {
//     printf("Hello, Stranger\n");
// }

// int main()
// {
//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// Function Types:
// 1. Library Functions: Special Functions in-built in c, example: printf(), scanf(), pow(), etc;
// 2. User-Defined Functions: declared and defined by the programmer

// Passing Arguments: Functions can take value(this value is known as parameter) & give some value(this value is known as return value);

// #include <stdio.h>

// int sum(int a, int b);

// int main()
// {
//     int a, b;
//     printf("Enter value of a: ");
//     scanf("%d", &a);
//     printf("Enter value of b: ");
//     scanf("%d", &b);
//     int ans = sum(a, b);
//     printf("Sum: %d", ans);
//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

// Difference between arguments and parameters
// Arguments:
// 1. values that are passed in function call.
// 2. used to send value
// 3. known as actual parameter

// Parameters:
// 1. values in function declaration & definition.
// 2. used to receive value
// 3. formal parameter

// Notes : a function can only return one value and changes to parameter in function don't change the values in calling function because a copy of argument is passed to the function

// Recursion: When a function calls itself

// 1. Print "Hello World" 5 times

// #include <stdio.h>

// void print(int i);

// int main()
// {
//     print(5);
//     return 0;
// }

// void print(int i)
// {
//     if (i == 0)
//         return;
//     printf("Hello World\n");
//     print(i - 1);
// }

// #include <stdio.h>

// int sum(int n);

// int main()
// {
//     printf("Sum: %d", sum(5));
//     return 0;
// }

// int sum(int n)
// {
//     if (n <= 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int sumN1 = sum(n - 1);
//     int finalSum = sumN1 + n;
//     return finalSum;
// }

// #include <stdio.h>

// int factorial(int n)
// {
//     if (n <= 0 || n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     printf("Factorial of 5: %d", factorial(5));
//     return 0;
// }

// Properties of Recursion
// 1. Anything that can be done with iteration, can be done with recursion and vice-versa.
// 2. Recursion acn sometimes give the most simple solution
// 3. Base case is the condition which stops recursion.
// 4. Recursion has infinite loop & Recursion has stack overflow

#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    int fibo = fib(n - 1);
    int fib2 = fib(n - 2);
    int fibon = fibo + fib2;
    return fibon;
}

int main()
{
    printf("fibonacci: %d", fib(6));
    return 0;
}