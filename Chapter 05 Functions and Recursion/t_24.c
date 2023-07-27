/*
Function to convert Fahrenheit to Celsius
*/

#include <stdio.h>

float fahrenToCel(int);
int main()
{
    printf("%.2f", fahrenToCel(-40));
    return 0;
}

float fahrenToCel(int c)
{
    return (c - 32) * 5 / 9;
}
