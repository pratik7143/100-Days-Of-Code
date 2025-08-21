#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    printf("The sum of the numbers %d and %d is %d\n",a,b,a + b);
    printf("The product of %d and %d is %d\n", a, b, a * b);
    printf("The difference of %d and %d is %d\n", a, b, a - b);
    printf("The quotient of %d and %d is %d\n", a, b, a / b);
    return 0;
}
