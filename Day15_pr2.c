#include <stdio.h>

int main() {
    int n, rn = 0,i; // rn denotes reverse number 
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!= 0) {
        i = n % 10;          
        rn = rn * 10 + i;    
        n = n / 10;         
    }
    printf("Reversed number = %d\n", rn);
    return 0;
}
