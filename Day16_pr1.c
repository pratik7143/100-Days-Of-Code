#include <stdio.h>
int main() {
    int num, i, place = 1;
    int binary = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        i = num % 2;            
        binary = binary + i * place; 
        place = place * 10;    
        num = num / 2;         
    }
    printf("Binary number = %d\n", binary);
    return 0;
}


