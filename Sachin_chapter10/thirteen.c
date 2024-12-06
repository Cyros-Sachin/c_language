#include <stdio.h>

void main(){
    int num1,num2;
    printf("Enter a number to be checked:");
    scanf("%d",&num1);
    printf("Enter a number to be checked:");
    scanf("%d",&num2);
    if (num2%num1==0)
    {
        printf("Yes");
    }
    else
    {
        printf("Noo");
    }
}