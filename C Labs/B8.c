//  C program to accept m*n matrix to find sum of upper diagonal and lower diagonal elements.

#include <stdio.h>

void fillingArr(int n, int arr[n][n]);

int main()
{
    int n, m;
    printf("Enter the dimension of the matrix: ");
    scanf("%d %d", &n, &m);
    if (n != m)
    {
        printf("Enter dimension for a square matrix");
        return 0;
    }
    int arr[n][m];
    fillingArr(n, arr);
    int upper = 0;
    int lower = 0;
    int u = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            upper += arr[i][j];
        }
        for (int j = 0; j < i; j++)
        {
            lower += arr[i][j];
        }
    }

    printf("Upper Diagonal: %d \n", upper);
    printf("Lower Diagonal: %d \n", lower);
    return 0;
}

void fillingArr(int n, int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }
}