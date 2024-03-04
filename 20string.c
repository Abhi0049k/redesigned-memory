// Strings: A character array terminated by a '\0' (null character);
// null character denotes string termination

// Example :
// char name[] = {'M', 'A', 'N', 'G', 'A', 'L', 'A', 'M', '\0'};

// #include <stdio.h>

// void printString(char arr[]);

// int main()
// {
//     // char name[] = {'M', 'A', 'N', 'G', 'A', 'L', 'A', 'M', '\0'};
//     // or
//     char name[] = "Mangalam";
//     printf("%s\n", name);
//     char firstName[] = "Mangalam";
//     char lastName[] = "Kumar";
//     printString(firstName);
//     printString(lastName);
//     return 0;
// }

// void printString(char arr[])
// {
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>

// int main()
// {
//     char name[50];
//     printf("Enter your Name: ");
//     scanf("%s", name);
//     printf("your name is %s", name);
//     return 0;
// }

// Note: scanf() cannot input multi-word strings with spaces
// Here, gets() & puts() come into picture
// gets() is dangerous and outdated

// so we use fgets()
// gets(): input a string(even multi-word);

// puts(): output a string

// fgets(): stops when n-1 chars input or new line is entered

// #include <stdio.h>

// int main()
// {
//     char name[5];
//     // gets(name);
//     printf("Enter Your Name: ");
//     fgets(name, 10, stdin);
//     puts(name);
//     return 0;
// }

// String using Pointers

// char *str = "Hello World";
// Store string in memory &the assigned address is stored in the char pointer "str";

// char *str = "Hello World"; // this variable can be reinitialized

// char str[] = "Hello World"; // cannot be reinitialized

// #include <stdio.h>

// int main()
// {
//     char *str = "Hello World";
//     puts(str);
//     str = "Hello";
//     puts(str);
//     return 0;
// }

// Make a program that inputs user's name & prints its length

// #include <stdio.h>

// int countLength(char arr[]);

// int main()
// {
//     char name[100];
//     printf("Enter name: ");
//     fgets(name, 100, stdin);
//     printf("Length: %d", countLength(name));
//     return 0;
// }

// int countLength(char arr[])
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }

// C also has many useful string functions, which can be used to perform certain operations on strings.

// To use them, you must include the <string.h> header file in your program

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[] = "Mangalam";
//     printf("%d\n", strlen(name)); // to find the length of the string
//     char str1[] = "Hello";
//     char str2[] = "World";
//     strcpy(str1, str2); // copying second string to first string
//     puts(str1);

//     char firstStr[] = "Mangalam ";
//     char lastStr[] = "Kumar";
//     strcat(firstStr, lastStr); // concatenates first string with second string
//     puts(firstStr);

//     printf("%d\n", strcmp(firstStr, lastStr)); // Compares 2 strings & returns a value
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     int i = 0;
//     char ch;
//     printf("Enter your name: ");
//     while (ch != '\n')
//     {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     return 0;
// }

// Salting: Find the salted form of a password entered by user if teh salt is "123" & added at the end.

// #include <string.h>
// #include <stdio.h>

// void salting(char password[]);

// int main()
// {
//     char password[100];
//     printf("Enter your password: ");
//     scanf("%s", &password);
//     salting(password);
//     return 0;
// }

// void salting(char password[])
// {
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// Write a function named slice, which takes a string & returns a sliced string from index n to m

#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main()
{
    char str[] = "HelloWorld";
    slice(str, 3, 6);
    return 0;
}

void slice(char str[], int n, int m)
{
    char newStr[100];
    for (int i = n, j = 0; i < m; i++, j++)
    {
        newStr[j] = str[i];
    }
    printf("Slice: ");
    puts(newStr);
}