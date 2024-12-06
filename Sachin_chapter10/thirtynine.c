#include <stdio.h>
#include <math.h>
void main()
{
    int num,power;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int j = 5; j >= 1; j--)
    {
        power=(int)round(pow(10,j));
        printf("%d", num-((num/power)*power));
        printf("\t");
        power/=10;
        printf("%d\n", num/power);

    }
}