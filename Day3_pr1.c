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
