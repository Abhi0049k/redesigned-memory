// C program to accept m*n matrix. To find trace and norm of square matrix and to print principle
// diagonal elements

#include <stdio.h>
#include <math.h>

void fillingArr(int n, int arr[n][n]);
void traceArr(int n, int arr[n][n]);
void normArr(int n, int arr[n][n]);
void principleDiagonal(int n, int arr[n][n]);

int main()
{
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    fillingArr(n, arr);
    traceArr(n, arr);
    normArr(n, arr);
    principleDiagonal(n, arr);
    return 0;
}

void principleDiagonal(int n, int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
}

void normArr(int n, int arr[n][n])
{
    double norm = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            norm += pow(arr[i][j], 2);
        }
    }
    norm = sqrt(norm);
    printf("The norm of the matrix is: %.2lf\n", norm);
}

void traceArr(int n, int arr[n][n])
{
    int trace = 0;
    for (int i = 0; i < n; i++)
    {
        trace += arr[i][i];
    }
    printf("Trace of the square matrix: %d\n", trace);
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