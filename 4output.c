#include <stdio.h>

int main()
{
    int age = 22;
    float pi = 3.14;
    char hashtag = '#';
    printf("Hello From output.c\n");
    printf("Hello From output.c\n");
    printf("Hello From output.c\n");
    printf("Hello From output.c\n");
    printf("age is %d\n", age);    // for printing integer we use %d
    printf("pi is %f\t", pi);      // for printing float value we use %f
    printf("char is %c", hashtag); // for printing char value we use %c
    // and these %d, %f, %c and etc are known as format specifiers
    return 0;
}