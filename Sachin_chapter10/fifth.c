/*right triangle of alphabets */

#include <stdio.h>

void main(){
    int n; 
    char c = 'A';
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
    
}


