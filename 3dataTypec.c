// Data Types means what type of data you are storing
// Data type           Size in byte
// Char or signed char 1
// unsigned char 1
// int or signed int 2
// unsigned int 2
// short int or unsigned short int 2
// signed short int 2
// long int or signed long int 4
// unsigned long int 4
// float 4
// double 8
// long double 10

//! Note: boolean and string data type doesn't exist in C

#include <stdio.h> // Preprocessor Directive: This is a tool which processes the source code before it's compiled or interpreted by the compiler or interpreter

int main() // Start of execution
{
    int age = 32;
    float pi = 3.14;
    const int a = 2;
    printf("%d\n", a);
    // a = 3;       // This will give an error
    printf("%d\n", a);
    char start = '*';
    return 0;
}

// Keywords: Reserved words that have special meaning to the compiler.
// Count of keywords=32
// Keywords: auto, double, int, struct, break, else, long, switch, case, enum, register, typedef, char, extern, return, union, continue, for signed, void, do, if, static, while, default, goto, sizeof, volatile, const, float, short, unsigned

// Comments:
// Lines that are not part of program, these are use for better understanding of the program
// Types of Comments: 1. Single line Comments "//" ; 2. Multiple Line Comments "/*     */"