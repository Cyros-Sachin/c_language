#include <stdio.h>
int fact(int n);
void main(){
    int n,res;
    printf("Enter a number :");
    scanf("%d",&n);
    res = fact(n);
    printf("%d! = %d",n,res);
}

int fact(int n){
    int f=1;
    for (int i = 1; i <= n; i++)
    {
        f*=i;
    }
    return f;
}

