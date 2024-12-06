#include <stdio.h>
#include <math.h>
void main()
{
    int x,terms,res=0;
    printf("Enter value of X :");
    scanf("%d",&x);
    printf("Enter value of terms :");
    scanf("%d",&terms);
    for (int i = 1; i <= terms; i++)
    {
        if (i%2==0)
        {
            res+=pow(x,i);
        }else
        {
            res-=pow(x,i);
        }
    }
    printf("%d",res);
}