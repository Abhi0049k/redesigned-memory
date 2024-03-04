// Pointers : A variable that store the memory address of another variable

// Syntax:

// int age = 20;

// int *ptr = &age;

// printf("%d", ptr);

// #include <stdio.h>

// int main()
// {
//     int age = 20;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("%p\n", _age);
//     printf("%p\n", ptr);
//     printf("%p\n", &age);
//     return 0;
// }

// Pointer to Pointer

// A variable that stores the memory address of another pointer

#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("age: %p\n", &age);
    printf("address of age: %p address of pointer %p\n", *ptr, &ptr);
    printf("pointer of pointer %p\n", pptr);
    return 0;
}

// Pointers in Function Call
// 1. Call by Value: we pass value of a variable as an argument.
// 2. Call by reference: we pass address of a variable as an argument.