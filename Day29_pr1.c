/*Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main()
{
    int array[50],n, sum = 0;
    printf("Enter the number of elements you want to take: \n");
    scanf("%d",&n);
    printf("The %d elements are: \n", n);
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    printf("The sum of array is %d", sum);
    return 0;
}