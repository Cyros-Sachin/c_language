#include <stdio.h>
#include <math.h>
void main()
{
    int terms,x;
    float res=0;
    printf("Enter value of terms :");
    scanf("%d",&terms);
    printf("Enter value of X :");
    scanf("%d",&x);
    for (int i = 0; i < terms; i++)
    {
        if (i%2==0)
        {
            res+=pow(x,i)/fact(i);
        }else
        {
            res-=pow(x,i)/fact(i);
        }
    }
    printf("%.2f",res); 
}