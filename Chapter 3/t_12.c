/*
Write a program to find the greatest of four numbers entered by the user.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, greatest;

    printf("Enter First Number :");
    scanf("%d", &num1);

    printf("Enter Second Number :");
    scanf("%d", &num2);

    printf("Enter Third Number :");
    scanf("%d", &num3);

    printf("Enter Fourth Number :");
    scanf("%d", &num4);

    greatest = num1;

    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }
    if (num4 > greatest)
    {
        greatest = num4;
    }
    printf("Greatest Number is %d", greatest);
    
    
    

    return 0;
}
