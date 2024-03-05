// C program to display transpose of given m*n matrix using function

#include <stdio.h>

void fillingArr(int n, int arr[n][n]);
void transpose(int n, int arr[n][n]);

int main()
{
    int n, m;
    printf("Enter dimensions of the matrix: ");
    scanf("%d %d", &n, &m);
    if (n != m)
    {
        printf("Transpose is not possible");
        return 0;
    }
    int arr[n][m];
    printf("Enter elements in the matrix: ");
    fillingArr(n, arr);
    transpose(n, arr);
    return 0;
}

void transpose(int n, int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
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