// C program to check whether the given number is factorial of a number or not

#include <stdio.h>

int main()
{
    double fact;
    printf("Enter a supposed factorial: ");
    scanf("%lf", &fact);
    double pro = 1;
    for (int i = 1; i <= fact; i++)
    {
        pro *= i;
        if (pro == fact)
        {
            printf("%.0lf is a factorial of %d", fact, i);
            return 0;
        }
        else if (pro > fact)
        {
            break;
        }
    }
    printf("%.1lf is not a factorial", fact);
    return 0;
}