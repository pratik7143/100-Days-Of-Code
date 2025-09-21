/*Q64: Find the digit that occurs the most times in an integer number.
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
int main()
{
    int num, digit;
    int freq[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    int maxDigit = 0;
    int maxCount = freq[0];
    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            maxDigit = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", maxDigit);
    return 0;
}




