#include <stdio.h>
int prime(int i);
void main(){
    int num,temp;
    printf("Enter a number :");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        temp=prime(i);
        if (num%i == 0 && temp==1)
        {
            printf("%d \n",i);
        }
    }
}

int prime(int i){
    int count=0;
    for (int j = 1; j < i; j++)
    {
        if (i%j==0)
        {
            count++;
            
        }
    }
    return count;
} 


