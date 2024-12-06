#include <stdio.h>
void main()
{
    int num, bin[50], i;
    while (1)
    {
        printf("\n");
        i = 0;
        printf("Enter a number : ");
        scanf("%d", &num);
        if (num == 999)
        {
            break;
        }
        else if (num < 0)
        {
            continue;
        }
        else
        {
            while (num > 0)
            {
                bin[i] = num % 2;
                num /= 2;
                i++;
            }
            for (int j = i - 1; j >= 0; j--)
            {
                printf("%d", bin[j]);
            }
            continue;
        }
        
    }
}