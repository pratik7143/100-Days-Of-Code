#include <stdio.h>
int main(){
    int units, bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 5;   // ₹5 per unit
    }
    else if (units <= 101 || units <= 200)
    {
        bill = (units * 5) + 200;
    }
    else 
    {
        bill = (units*5) + 950;
    }
    printf("Bill: ₹%d\n", bill);
}

 
