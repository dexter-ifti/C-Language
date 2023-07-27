/*
Write a program to print a multiplication table of 10 in reversed order
*/
#include <stdio.h>

int main()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("10 x %d = %d", i, 10*i);
        printf("\n");
    }
    return 0;
}