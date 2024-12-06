#include <stdio.h>

void main()
{
    int rows, item = -1, content = 1, check = 1;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= item + 2; j++)
        {
            if (check == 1 || content == 1)
            {
                printf("%d", content);
                if (content == i)
                {
                    content--;
                    check=0;
                }
                else
                    content++;
            }
            else
            {
                printf("%d", content);
                content--;
            }
            if (j == i)
            {
                check = 1;
            }
        }
        item += 2;
        content = i + 1;
        printf("\n");
    }
}