/*Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/#include <stdio.h>
int main()
{
    int array[50], n;
    int max, min;
    printf("Enter the number of elements you want to take: \n");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    max = min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}
