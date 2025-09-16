Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    int second, mins, hours, a;
    printf("Enter the time in seconds: ");
    scanf("%d", &second);
    hours = second / 3600;
    a = second % 3600;
    mins = a / 60;
    second = a % 60;
    printf("%d:%d:%d", hours, mins, second);
    return 0;
}

