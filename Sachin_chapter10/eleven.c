/* Floyd's triangle */

#include <stdio.h>

void main(){
    int n,c=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",c);
            c++;
        }
        printf("\n");
    }
}


