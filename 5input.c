#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // this scanf function is taking value from the user and than it is storing that value in address provided by &age
    printf("age is: %d\n", age);
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    // int sum = a + b;
    // printf("Sum of a and b is %d", sum);
    printf("Sum of a and b is %d", a + b);
    return 0;
}

// Compilation: A computer program that translates C code into machine-readable instructions known as machine code, that can be executed by a computer's processor. This process is typically performed by a software tool called a compiler.