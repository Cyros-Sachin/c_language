#include <stdio.h>

void main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i+=2)
    {
        sum+=i;
    }
    printf("Sum is: %d",sum);
}