#include <stdio.h>

void main()
{
    int month ;
    char months[12][20]={"January","february","March","April","may","june","july","august","september","october","november","december"};
    printf("Enter the month number:");
    scanf("%d",&month);
    printf("%s",months[month-1]);
}