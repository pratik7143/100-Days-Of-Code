#include <stdio.h>

int main()
{
    int days;
    int fine = 0;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    if (days <= 0)
    {
        printf("No fine.\n");
    }
    else if (days <= 7)
    {
        fine = days * 2;
    }
    else if (days >= 8 || days <= 14)
    {
        fine = days * 4;
    }
    else if (days == 31)
    {
        printf("Membership cancelled");
    }
    else
    {
        fine = days * 6;
    }

    if (fine > 0)
    {
        printf("Fine to pay is %d Rupees\n", fine);
    }
    return 0;
}
