#include <stdio.h>

void main()
{
    int num[5];
    int choice, sum = 0;
    while (1)
    {
        sum=0;
        printf("\n1. Read 3 numbers \n2. Calculate total \n3. Calculate average \n4. Display the shortest \n5. Display the largest \nEnter Your choice(1/2/3/4/5):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i=0; i<3; i++)
            {
                printf("Enter the number %d :", i+1);
                scanf("%d", &num[i]);
            }
            break;

        case 2:
            for (int i = 0; i < 3; i++)
            {
                sum += num[i];
            }
            printf("\nSum is : %d", sum);
            break;

        case 3:
            for (int i = 0; i < 3; i++)
            {
                sum += num[i];
            }
            printf("\nAverage is : %d", sum / 3);
            break;

        case 4:
            sum = num[0];
            for (int i = 0; i < 3; i++)
            {
                if (sum > num[i])
                {
                    sum = num[i];
                }
            }
            printf("\nSmallest is : %d", sum);
            break;

        case 5:
            sum = num[0];
            for (int i = 0; i < 3; i++)
            {
                if (sum < num[i])
                {
                    sum = num[i];
                }
            }
            printf("\nLargest is : %d", sum);
            break;

        default:
            printf("\nWrong choice!!!");
            break;
        }
    }
}