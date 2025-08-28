#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 97 && ch <= 122)
    {
        printf("The character %c is a lowercase alphabet\n", ch);
    }
    else if(ch >= 65 && ch <= 90)
    {
        printf("The character %c is an Uppercase alphabet\n", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("The character %c is a digit\n", ch);
    }
    else
    {
        printf("The character %c is a special character", ch);
    }
    return 0;
}

