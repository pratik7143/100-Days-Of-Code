/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
    int length, breadth, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d\n", length*breadth);
    perimeter = 2*(length+breadth);
    printf("The perimeter of the rectangle is %d\n", perimeter);
    return 0;
}


