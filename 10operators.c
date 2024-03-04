// Operators
// 1. Arithmetic Operators => +, -, /, *, %, ++, --
// 2. Relational Operators => ==, >, >=, <, <=, !=
// #include <stdio.h>

// int main()
// {
//     printf("%d \n", 4 == 5);
//     printf("%d \n", 4 == 4);
//     printf("%d \n", 4 <= 5);
//     printf("%d \n", 5 >= 3);
//     printf("%d \n", 5 != 0);
//     return 0;
// }

// 3. Logical Operators => &&, ||, !

// #include <stdio.h>

// int main()
// {
//     printf("%d \n", (34 < 35) && (32 != 33));
//     printf("%d \n", (34 < 35) && (33 != 33));
//     printf("%d \n", (34 < 35) || (33 != 33));
//     printf("%d \n", !(34 < 35) || (33 != 33));
//     printf("%d \n", !(34 < 35) && (33 != 33));
//     return 0;
// }

// Operators  Precedence => Priority (from greatest to lowest) => (!) > (*,/,%) , (+, -), (<,<=,>,>=), (==, !=), (&&), (||), (=)

// 4. Assignment Operator => =, +=, -=, *=, /=, %=

// #include <stdio.h>

// int main()
// {
//     int a = 1;
//     int b = 2;
//     // a = a+b;
//     // or
//     a += b;
//     printf("%d", a);

//     return 0;
// }

// 5. Bitwise Operators => &, |, ^, ~, <<, >>
// i. &: int result = 5 & 3; // Result: 1 (binary: 0101 & 0011 = 0001)
// ii. |: int result = 5 | 3; // Result: 7 (binary: 0101 | 0011 = 0111)
// iii. ^: int result = 5 ^ 3; // Result: 6 (binary: 0101 ^ 0011 = 0110)
// iv: ~: int result = ~5; // Result: -6 (binary: ~0101 = 1010 in two's complement)
// v: <<: int result = 5 << 2; // Result: 20 (binary: 0101 << 2 = 10100)
// vi: >>: int result = 10 >> 1; // Result: 5 (binary: 1010 >> 1 = 0101)

// Write a program to check if a number is divisible by 2 or not.

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("%d", a % 2 == 0);
//     return 0;
// }

// Print 1(true) or 0(false) for following statements:
// a. if it's sunday & it's snowing -> true
// b. if it's monday or it's raining -> true
// c. if a number is greater than 9 & less than 100 -> true

#include <stdio.h>

int main()
{
    int isSunday = 1;
    int isSnowing = 1;
    int isMonday = 1;
    int isRaining = 1;
    int x;
    printf("%d \n", isSunday && isSnowing);
    printf("%d \n", isMonday && isRaining);
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d \n", (x > 9) && (x < 100));
    return 0;
}