/*
Write a program to find whether a year entered by the user is a leap year or not.
*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 != 0)
        {
            printf("%d is not a Leap Year", year);
        }
        else {
            printf("%d is a Leap Year", year);
        }
    }
    else if (year % 4 == 0)
    {
        printf("%d is a Leap Year", year);
    }
    else {
        printf("%d is not a Leap Year", year);
    }
    
    
    return 0;
}
