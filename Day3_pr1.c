/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
    float celsius;
    printf("Enter the temperature: ");
    scanf("%f", &celsius);
    float fahrenheit;
    fahrenheit = (9.0/5.0)*celsius + 32;
    printf("The value in Fahrenheit is %f",fahrenheit);
    return 0;

}

