#include <stdio.h>


int main()
{
    int n, i, pro = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            pro = pro * i;
        }
    }
    printf("Product of even numbers ranging from 1 to %d is %d\n", n, pro);
    return 0;
}






