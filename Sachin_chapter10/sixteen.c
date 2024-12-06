#include <stdio.h>
#include <math.h>

void main()
{
    for (int i = 0; i <= 360; i+=15)
    {
        printf("Cos %d = %f\n",i,cos(i));
    }
    for (int i = 0; i <= 360; i+=15)
    {
        printf("Tan %d = %f\n",i,tan(i));
    }
    
}