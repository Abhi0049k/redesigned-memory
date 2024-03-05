// C program to print difference of two matrices.

#include <stdio.h>

void fillingArr(int arr[][3]);
void printingArr(int arr[][3]);
void difference(int arr1[][3], int arr2[][3], int arr3[][3]);

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    printf("Fill the first 3-by-3 matrix: \n");
    fillingArr(arr1);
    printf("Fill the second 3-by-3 matrix: \n");
    fillingArr(arr2);
    difference(arr1, arr2, arr3);
    return 0;
}

void difference(int arr1[][3], int arr2[][3], int arr3[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printingArr(arr3);
}

void fillingArr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }
}

void printingArr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}