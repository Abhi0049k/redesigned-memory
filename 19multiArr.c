// Multidimensional Arrays
// 2D Arrays
// Syntax:
// int arr[][] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

// #include <stdio.h>

// int main()
// {
//     int marks[2][3];
//     marks[0][0] = 90;
//     marks[0][1] = 89;
//     marks[0][2] = 88;

//     marks[1][0] = 89;
//     marks[1][1] = 97;
//     marks[1][2] = 84;

//     printf("%d", marks[0][0]);
//     return 0;
// }

// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("%d", countOdd(arr, 9));
//     return 0;
// }

// int countOdd(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// Write a function to reverse an array.

// #include <stdio.h>

// void reverseArr(int arr[], int n);
// void printArr(int arr[], int n);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = 9;
//     printArr(arr, n);
//     reverseArr(arr, n);
//     printArr(arr, n);
//     return 0;
// }

// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void reverseArr(int arr[], int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int first = arr[i];
//         int last = arr[n - 1 - i];
//         arr[i] = last;
//         arr[n - 1 - i] = first;
//     }
// }

// Creating a 2d array, storing the tables of 2 and 3.

#include <stdio.h>

void storeTables(int arr[][10], int n, int m, int number);
void printArr(int arr[][10], int n);

int main()
{
    int tables[2][10];
    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);
    printArr(tables, 0);
    printArr(tables, 1);
    return 0;
}

void storeTables(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

void printArr(int arr[][10], int n)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr[n][i]);
    }
    printf("\n");
}