#include <stdio.h>

void main(){
    int num;
    printf("Enter a number to be checked:");
    scanf("%d",&num);
    if (num!=0 && ((num & num - 1)) == 0 )
    {
        printf("Yes");
    }
    else
    {
        printf("Noo");
    }
}