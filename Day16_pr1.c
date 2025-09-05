#include <stdio.h>

int main() {
    int num, i;
    int binary[64];  
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j] );
    }
    printf("\n");

    return 0;
}
