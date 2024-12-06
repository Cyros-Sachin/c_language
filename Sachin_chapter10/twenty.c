#include <stdio.h>

void main()
{
    float total[50],average[50],sub[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks of Student %d --->>>\n",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks of Exam %d:",j+1);
            scanf("%f",&sub[j]);
        }
        total[i]=sub[0]+sub[1]+sub[2];
        average[i]=total[i]/3;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\n",total[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f,",average[i]);
    }
}