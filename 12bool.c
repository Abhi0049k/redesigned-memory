// In C, the bool type is not a built-in data type, like int or char.
// We must import the following header file to use it:

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d \n", isFishTasty);
    printf("%d \n", isProgrammingFun);
    return 0;
}