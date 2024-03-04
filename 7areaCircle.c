#include <stdio.h>

int main()
{
    float radius;
    const float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("area of the circle is %f", pi * radius * radius);
    return 0;
}