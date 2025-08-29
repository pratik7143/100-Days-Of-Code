#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, r1, r2;
    printf("Enter the numbers a,b & c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = (pow(b, 2) - 4 * a * c);
    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / 2 * a;
        r2 = (-b - sqrt(D)) / 2 * a;
        printf("Roots are real and different: r1 = %.2f, r2 = %.2f\n", r1, r2);
    }
    else if (D == 0)
    {
        r1 = r2 = (-b + sqrt(D)) / 2 * a;
        printf("Roots are real and same: r1=r2=%.2f\n", r1);
    }
    else
    {
        printf("Roots are complex.\n");
    }
    return 0;
}
