#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of the Circle: ");
    scanf("%d", &radius);
    printf("The area of the circle with radius %d is %f\n", radius, 3.14 * radius * radius);
    printf("The circumference of the circle with radius %d is %f\n", radius, 2 * 3.14 * radius);
    return 0;
}

