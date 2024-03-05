// Dynamic Memory Allocation:
// It is a way to allocate memory to a data structure during the runtime.

// Functions for DMA
// a. malloc(): Memory Allocation
// b. calloc(): continuous Allocation
// c. free(): free function or we use it to free memory that is allocated using malloc and calloc
// d. realloc(): re-allocation
// We have to import this library to perform these functions : stdlib.h
// malloc(): takes number of bytes to be allocated & returns a pointer of type void
// ptr = (int*)malloc(5*sizeof(int));

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(5 * sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }

//     return 0;
// }

// Allocate memory to store first 5 odd number, then reallocate it to store first 6 even number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    ptr = realloc(ptr, 6);

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}