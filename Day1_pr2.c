/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/
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



