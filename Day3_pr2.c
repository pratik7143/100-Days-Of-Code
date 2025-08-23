#include <stdio.h>
int main() {
    int num1, num2, replace;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    replace = num1;
    num1 = num2;
    num2 = replace;
    printf("The numbers are %d & %d ", num1, num2);
    return 0;
}

