//  C program to find largest and smallest of n numbers

#include <stdio.h>

int main()
{
    int n;
    int smallest, largest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int el;
    printf("Enter an element: ");
    scanf("%d", &el);
    smallest = el;
    largest = el;
    for (int i = 1; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &el);
        if (smallest > el)
        {
            smallest = el;
        }
        if (largest < el)
        {
            largest = el;
        }
    }
    printf("Smallest Number: %d\nLargest Number: %d", smallest, largest);
    return 0;
}