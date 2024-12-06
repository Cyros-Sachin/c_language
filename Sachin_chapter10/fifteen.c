#include <stdio.h>
#include <math.h>

void main()
{
    for (int i = 0; i <= 360; i+=15)
    {
        printf("Sin %d = %f\n",i,sin(i));
    }
    
}