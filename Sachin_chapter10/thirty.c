#include <stdio.h>

void main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            for (int j = 1; j <= row; j++)
            {
                if (j == i)
                {
                    printf("$");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= row; j++)
            {
                if (j == 1 || j == row)
                {
                    printf("*");
                }
                else
                {
                    if (j == i)
                    {
                        printf("$");
                    }else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
}