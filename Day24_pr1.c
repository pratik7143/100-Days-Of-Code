/* Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include<stdio.h>
int main() {
    //int n;                                  
    //printf("Enter the number of rows: ");             For n number of rows
    //scanf("%d",&n);
    for(int i = 1;i<=5;i++){
        for (int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}