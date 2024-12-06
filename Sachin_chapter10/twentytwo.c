#include <stdio.h>

void main(){
    char choice;
    int hrs;
    printf("Enter your choice : (c for car , t for truck , b for bus , s for scooter , C for cycle , m for motor cycle) : ");
    scanf("%c",&choice);
    printf("Number of hours:");
    scanf("%d",&hrs);
    switch (choice)
    {
    case 'c':
        printf("%d",hrs*10);
        break;
    case 't':
        printf("%d",hrs*20);
        break;
    case 'b':
        printf("%d",hrs*20);
        break;
    case 's':
        printf("%d",hrs*5);
        break;
    case 'C':
        printf("%d",hrs*5);
        break;
    case 'm':
        printf("%d",hrs*5);
        break;
    
    default:
        break;
    }
}