#include <stdio.h>
#include <math.h>
void main()
{
    int terms,res=0;
    printf("Enter value of terms :");
    scanf("%d",&terms);
    for (int i = 1; i <= terms; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            res+=i;
        }
        
    }
    printf("%d",res);
}