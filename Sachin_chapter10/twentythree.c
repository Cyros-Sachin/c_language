#include <stdio.h>

void main()
{
    char choice;
    int hrs;
    printf("Enter your choice : (c for car , t for truck , b for bus , s for scooter , C for cycle , m for motor cycle) : ");
    scanf("%c", &choice);
    printf("Number of hours:");
    scanf("%d", &hrs);
    switch (choice)
    {
    case 'c':
        if (hrs > 3)
        {
            printf("%d", hrs * 20);
        }
        else
        {
            printf("%d", hrs * 10);
        }
        break;
    case 't':
        if (hrs > 3)
        {
            printf("%d", hrs * 30);
        }
        else
        {
            printf("%d", hrs * 20);
        }
        break;
    case 'b':
        if (hrs > 3)
        {
            printf("%d", hrs * 30);
        }
        else
        {
            printf("%d", hrs * 20);
        }
        break;
    case 's':
        if (hrs > 3)
        {
            printf("%d", hrs * 10);
        }
        else
        {
            printf("%d", hrs * 5);
        }
        break;
    case 'C':
        if (hrs > 3)
        {
            printf("%d", hrs * 10);
        }
        else
        {
            printf("%d", hrs * 5);
        }
        break;
    case 'm':
        if (hrs > 3)
        {
            printf("%d", hrs * 10);
        }
        else
        {
            printf("%d", hrs * 5);
        }
        break;

    default:
        break;
    }
}