/*Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in the array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array in the reverse order will be:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

