/*Inverted Full pyramid of "*" */

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = n; i >=0; i--)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i*2)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


