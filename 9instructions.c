// Instructions: These are statements in a Program which tells the program what to do.
// Types: 1. Type Declaration; 2. Arithmetic Instructions; 3. Control Instructions

// 1. Type Declaration Instructions
// example 1:
// int a = 22;
// int b = a;
// int c = b + 1;
// int d = 1;
// int a, b, c;
// a = b = c = 1; // Cannot do this int a=b=c=1; this is because in c we have to declare variables first in order to use them

// 2. Arithmetic Instructions
// a + b; // a and b are the elements on which operation is performed so a and b is called operands and + is called operator as its tells what type of operation is going to be performed
// int a = 32, b = 3;
// int sum = a + b;
// Operators: +,-,/,*,%

// correct example:
// a=b+c;
// a=b*c;
// a=b/c;

// incorrect examples:
// b+c = a;
// a = bc;
// a = b^c;  This ^ operator will not return the power and will return the xor

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int b, c;
//     b = c = 1;
//     int a = b + c;
//     int power = pow(b, c);
//     printf("%d   a: %d", power, a);
//     return 0;
// }
// Type Conversion
// (int) op (int) => (int)
// (int) op (float) => (float)
// (float) op (float) => (float)

// Type of conversion are of two types 1. implicit conversion: Happen automatically by the compiler; 2. explicit conversion: Conversion is done by the user

// #include <stdio.h>

// int main()
// {
//     int a = 1.999999;        // This is implicit type conversion as it happen automatically by the compiler
//     int b = (int)323.342342; // This is explicit type conversion as it is done by the user
//     printf("%d \n", a);
//     printf("%d\n", (int)'c');
//     printf("%d \n", b);
//     return 0;
// }

// Operator Precedence
// first: *,/,%
// second: +,-
// third: =

// #include <stdio.h>

// int main()
// {
//     int x = 4 * 3 / 6 * 2;            // This is a case of operation of same precedence
//     printf("%d \n", x);               // For same precedence we use associativity (from left to right) to calculate the value
//     printf("%d \n", 5 * 2 - 2 * 3);   // 10 - 6 => 4
//     printf("%d \n", 5 * 2 / 2 * 3);   // 5 * 3 => 15
//     printf("%d \n", 5 * (2 / 2) * 3); // 5 * 1 * 3 => 15
//     printf("%d \n", 5 + 2 / 2 * 3);   // 5 + 1 * 3 => 8
//     return 0;
// }

// 3. Control Instructions: Used to tell/determine flow of program
// 1. Sequence Control: One after the other
// 2. Decision Control: Flow depend on the Decision
// 3. Loop Control: When we have to repeat a set of instructions
// 4. Case Control: Flow depends on a certain
