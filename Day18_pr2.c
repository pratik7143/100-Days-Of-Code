#include <stdio.h>




int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b!=0) 
    {
        a = a % b;
        if (a == 0)
        { 
            break;
        }
        int c = a;
        a = b;
        b = c;
    }
    printf("HCF is %d\n", b == 0 ? a : b);
    return 0;
}




