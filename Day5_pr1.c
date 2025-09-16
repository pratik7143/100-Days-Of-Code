/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, amount, si, ci;
    printf("Enter the pricipal amount: ");
    scanf("%f", &principal);
    printf("Enter the Rate of Interest: ");
    scanf("%f", &rate);
    printf("The time is: ");
    scanf(" %f", &time);
    si = (principal * rate * time) / 100; //si denotes the Simple Interest
    amount = principal*pow((1+rate/100), time);
    ci = amount -principal; //ci denotes the Compound Interest
    printf("The simple interest is %f\n", si);
    printf("The compound interest is %f\n", ci);
}


