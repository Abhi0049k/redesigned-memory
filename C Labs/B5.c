// C program to accept two matrices of order m*n and p*q to find product of two matrices using
// function

#include <stdio.h>

void fillingArr(int r, int c, int arr[r][c]);
void matrixProduct(int n, int m, int arr1[n][m], int p, int q, int arr2[p][q]);
void printingMatrix(int r, int c, int arr[r][c]);

int main()
{
    int n, m, p, q;
    printf("Enter order of the first matrix: ");
    scanf("%d %d", &n, &m);
    printf("Enter order of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (m != p)
    {
        printf("Product of matrix of these dimension is not possible\n");
        return 0;
    }
    int arr1[n][m];
    int arr2[p][q];
    printf("Enter elements to fill the first matrix: \n");
    fillingArr(n, m, arr1);
    printf("Enter elements to fill the second matrix: \n");
    fillingArr(n, m, arr2);
    matrixProduct(n, m, arr1, p, q, arr2);
    return 0;
}

void fillingArr(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }
}

void matrixProduct(int n, int m, int arr1[n][m], int p, int q, int arr2[p][q])
{
    int result[n][q];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printingMatrix(n, q, result);
}

void printingMatrix(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}