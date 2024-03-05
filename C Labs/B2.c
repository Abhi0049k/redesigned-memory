// C program to search given number using linear search technique

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of element in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the element which needs to be searched: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Target found at index %d", i);
            return 0;
        }
    }
    printf("Target not found");
    return 0;
}