#include <stdio.h>
int main() {
    int num, digit, product = 1;
    int odd = 0;  // to check if there is at least one odd digit
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Product of odd digits = 0\n");
        return 0;
    }
    while (num > 0) {
        digit = num % 10;   // extract last digit
        if (digit % 2 != 0) {  // check if odd
            product *= digit;
            odd = 1;
        }
        num = num / 10;   // remove last digit
    }
    if (odd)
        printf("Product of odd digits is %d\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}

