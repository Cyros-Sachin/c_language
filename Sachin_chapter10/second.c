#include <stdio.h>

void far(float n);

void main(){
    float n;
    printf("Enter temperature in celcius:");
    scanf("%f",&n);
    far(n);
}

void far(float n){
    printf("%.2f C = %.2f F",n,(n*9/5)+32);
}

