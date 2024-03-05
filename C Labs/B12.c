//  C program to create simple marks card assuming appropriate condition

#include <stdio.h>

int main()
{
    int maths, science, english, total;
    float percentage;
    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in Science: ");
    scanf("%d", &science);
    printf("Enter marks obtained in English: ");
    scanf("%d", &english);
    total = maths + science + english;
    percentage = (float)total / 3;
    printf("\nMarks Card\n");
    printf("-----------\n");
    printf("Subject\t\tMarks\n");
    printf("Mathematics\t%d\n", maths);
    printf("Science\t\t%d\n", science);
    printf("English\t\t%d\n", english);
    printf("-----------\n");
    printf("Total\t\t%d\n", total);
    printf("Percentage\t%.2f%%\n", percentage);
    if (maths >= 40 && science >= 40 && english >= 40 && percentage >= 40)
    {
        printf("Result\t\tPass\n");
    }
    else
    {
        printf("Result\t\tFail\n");
    }

    return 0;
}
