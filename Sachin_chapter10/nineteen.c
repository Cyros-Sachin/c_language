#include <stdio.h>

void main(){
    int currdate,dob,age;
    printf("Enter your Date of birth:");
    scanf("%d",&dob);
    printf("Enter Today Date :");
    scanf("%d",&currdate);
    age=(currdate%10000)-(dob%10000);
    printf("%d",age);
}