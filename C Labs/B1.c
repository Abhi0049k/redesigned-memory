// C program for sorting given set of numbers using bubble sort technique.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}