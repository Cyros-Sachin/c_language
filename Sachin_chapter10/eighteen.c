#include <stdio.h>

void main()
{
    int num;
    printf("Enter Angle in degrees:");
    scanf("%d",&num);
    switch (num/90)
    {
    case 0:
        printf("1st Quadrant");
        break;
    
    case 1:
        printf("2nd Quadrant");
        break;
    
    case 2:
        printf("3rd Quadrant");
        break;
    
    case 3:
        printf("4th Quadrant");
        break;
    
    default:
        break;
    }
    
}