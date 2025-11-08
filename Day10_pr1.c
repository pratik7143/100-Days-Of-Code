Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main(){
    float a, b, c; // a,b,c are the three sides of the triangle
    printf("Enter threee sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
        printf("Sides must be positive or greater than zero");
        //if (a + b > c && b + c > a && a + c > b){
        //printf("It is a valid triangle.\n");
        if (a == b && b == c)
        {
            printf("It is an equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("It is an isosceles Triangle.\n");
        }
        else if (a != b && b != c && a != c)
        {
            printf("It is a scalene Triangle.\n");
        }
        else
        {
            printf("Triangle is not valid.\n");
        }
        return 0;
    }








