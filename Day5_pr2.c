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
