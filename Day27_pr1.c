#include<stdio.h>






int main(){
    //int n;
    //printf("Enter the number of lines: ");
    //scanf("%d",&n);
    for(int i = 1;i<5;i++){
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 4; i >= 1; i--) {
        for (int j = 1; j <=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

