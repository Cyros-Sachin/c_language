#include <stdio.h>
#include <math.h>
void main()
{
    int row = 9,c=4;
    for (int i = 1; i <= row; i++)
    {
        if (i <= (row/2)+1) 
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }else
        {
            for (int j = c; j > 0; j--)
            {
                printf("*");
            }
            c--;
            
        }
        printf("\n");
    }
}