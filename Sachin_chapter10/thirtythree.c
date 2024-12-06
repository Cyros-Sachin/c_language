#include <stdio.h>

void main()
{
    int num, large,c=0;
    while (1)
    {
        printf("Enter a number (if want to quit enter 999) :");
        scanf("%d", &num);
        if (c=0)
        {
            large=num;
            c=1;
        }
        if (num == 999)
        {
            break;
        }
        else
        {
            if (num > large)
            {
                large = num;
            }
            continue;
        }
    }
    printf("Largest among all : %d",large);
}