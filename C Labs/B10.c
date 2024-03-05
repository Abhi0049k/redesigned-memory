// C program to swap two numbers using function and pointers

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;
    int *aptr = &a;
    int *bptr = &b;
    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
    printf("%d %d", a, b);
    return 0;
}