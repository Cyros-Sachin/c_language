/*full pyramid of number */

#include <stdio.h>

void main(){
    int n,c=1,r=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i*2)-1; j++)
        {
            if (c==1)
            {
                r++;
                printf("%d",r);
                if (r==(i*2)-1)
                {
                    c=0;
                }
                
            }else{
                r--;
                printf("%d",r);
            }
        }
        printf("\n");
        c=1;
    }
}


