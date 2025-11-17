#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i<=n; i++) {        
        for (int j = 2; j<i; j++)
        {       
            if (i%j==0)
            {          
                break;
            }
        }
        if (j==i)
        {                   
            printf("%d ",i);
        }
    }
    return 0;
}
















