// GOTO Statement:
// With the help of goto statements we can transfer control unconditionally to a labeled statement
// within the same function.

// example1 :
// #include <stdio.h>

//     int
//     main()
// {
//     int i = 0;

// loop: // Label
//     printf("%d\n", i);
//     i++;
//     if (i < 5)
//         goto loop; // Jump to the 'loop' label

//     return 0;
// }

// example2:

#include <stdio.h>

int main()
{
    int num;
input:
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num <= 0)
        goto input;

    printf("You entered: %d\n", num);
    return 0;
}

// Uses Cases:
// 1. Error Handling: In situations where an error is encountered, a 'goto' statement can be used to jump to a common error-handling code block instead for duplicating error handling code throughout the function.
// 2. Exiting Nested Loops: Sometimes, in nested loops, you may need to exit from multiple levels of nesting at once. Using 'goto' to jump to a label outside the nested loops can simplify this situation.
// 3. Resource Cleanup: In functions where resources need to be explicitly released

// Note: While goto can be useful in certain situations, it's generally considered a good practice to avoid using it whenever possible