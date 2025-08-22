#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter the number num1: ");
    scanf("%d", &num1);
    printf("Enter the number num2: ");
    scanf("%d", &num2);
    printf("The sum of the numbers %d and %d is %d\n",num1,num2,num1+ =num2);
    printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
    printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
    printf("The quotient of %d and %d is %d\n", num1, num2, num1 / num2);
    return 0;
}

