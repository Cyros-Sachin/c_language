#include <stdio.h>

void main()
{
    int num=5;
    printf("1st Sequence\n");
    for (int i = 1; i < num; i++)
    {
        printf("%d,",i*i*i);
    }
    printf("\n2nd Sequence\n");
    for (int i = -5; i < 15; i+=3)
    {
        if (i==1)
        {
            i=0;
        }
        printf("%d,",i);
    }
    printf("\n3rd Sequence\n");
    for (int i = -2; i > -20; i-=2)
    {
        printf("%d,",i);
    }
    printf("\n4th Sequence\n");
    for (int i = 1; i < 20; i+=3)
    {
        printf("%d,",i);
    }
}