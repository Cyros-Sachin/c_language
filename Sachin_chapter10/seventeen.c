#include <stdio.h>

void main()
{
    int num;
    printf("Enter consumption unit:");
    scanf("%d",&num);
    if (num<=150)
    {
        printf("Electricity bill is %d",num*3);
    }
    else if (num>150 && num<=350)
    {
        printf("Electricity bill is %.2f",num*3.75 + 100);
    }
    else if (num>350&&num<450)
    {
        printf("Electricity bill is %.2f",num*4 + 250);
    }
    else if (num>450&&num<600)
    {
        printf("Electricity bill is %.2f",num*4.25 + 300);
    }
    else{
        printf("Electricity bill is %.2f",num*5 + 400);
    }
    
}