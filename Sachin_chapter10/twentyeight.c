#include <stdio.h>
void main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0)
    {
        num/=10;
        count+=1;
    }
    printf("Number of digits are: %d",count);
}