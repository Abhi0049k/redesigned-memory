// File is a container in a storage device to store data

// RAM is volatile
// Hard disk is non-volatile
// Contents are lost when program terminates
// Files are used to persist the data

// Operations on Files:
// Create, open, close, read, white in a file

// File Opening Modes:
// "r": Open to read;
// "rb": open to read in binary;
// "w": open to write;
// "wb": open to write in binary;
// "a": open to append;

// Types of files:
// 1. Text Files: textual Data

// 2. Binary Files: binary Data

// File Pointer
// File is a (hidden) structure that needs to be created for opening a file.

// A File ptr that points to this structure & is used to access the file.

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     // int ch;
//     // fptr = fopen("Test.txt", "r");

//     // fscanf(fptr, "%d", &ch);
//     // printf("%d", ch);
//     // fscanf(fptr, "%d", &ch);
//     // printf("%d", ch);
//     // fscanf(fptr, "%d", &ch);
//     // printf("%d", ch);
//     // fscanf(fptr, "%d", &ch);
//     // printf("%d", ch);
//     // fscanf(fptr, "%d", &ch);
//     // printf("%d", ch);
//     // fclose(fptr);
//     // fptr = fopen("Test.txt", "w");
//     // fprintf(fptr, "%c", 'M');
//     // fprintf(fptr, "%c", 'a');
//     // fprintf(fptr, "%c", 'n');
//     // fprintf(fptr, "%c", 'g');
//     // fprintf(fptr, "%c", 'o');
//     // fclose(fptr);
//     // fptr = fopen("Test.txt", "r");

//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));

//     // fclose(fptr);
//     fptr = fopen("Test.txt", "w");
//     fputc('H', fptr);
//     fputc('e', fptr);
//     fputc('l', fptr);
//     fputc('l', fptr);
//     fputc('o', fptr);
//     fclose(fptr);
//     return 0;
// }

// EOF (End of File)
// fgetc returns EOF to show that the file has ended

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//     char ch;
//     ch = fgetc(fptr);
//     while (ch != EOF)
//     {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//     int n;
//     fscanf(fptr, "%d", &n);
//     printf("%d", n);
//     return 0;
// }

// Make a program to input student information from a user & enter it to a file.

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Student.txt", "w");

//     char name[100];
//     int age;
//     float cgpa;
//     printf("Enter name: ");
//     scanf("%s", name);
//     printf("Enter age: ");
//     scanf("%d", &age);
//     printf("Enter cgpa: ");
//     scanf("%f", &cgpa);

//     fprintf(fptr, "Student Name: %s\n", name);
//     fprintf(fptr, "Student Age: %d\n", age);
//     fprintf(fptr, "Student CGPA: %.2f\n", cgpa);

//     fclose(fptr);
//     return 0;
// }

// Write a program to write all the odd numbers from 1 to n in a file

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fptr = fopen("Odd.txt", "w");
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             fprintf(fptr, "%d\n", i);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }

// 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
}