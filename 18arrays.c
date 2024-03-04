// Arrays : Collection of similar data types stored at contiguous memory locations
// Array is a pointer
// #include <stdio.h>

// int main()
// {
//     int marks[] = {10, 20, 30};
//     printf("%d \n", *(marks));
//     printf("%d \n", *(marks + 1));
//     printf("%d \n", *(marks + 2));
//     printf("Enter a value: ");
//     scanf("%d", &marks[3]);
//     printf("%d \n", *(marks + 3));
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int age = 20;
//     int *ptr = &age;
//     printf("%p\n", ptr);
//     ptr--;
//     printf("%p\n", ptr);
//     ptr++;
//     printf("%p\n", ptr);
//     return 0;
// }

// Arrays as function argument

// void printNumbers(int arr[], int n);
//  OR
// void printNumbers(int *arr, int n);

// Function Call
// printNumbers(arr, n);

#include <stdio.h>

void printNumber(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printNumber(arr, 5);
    return 0;
}

void printNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}