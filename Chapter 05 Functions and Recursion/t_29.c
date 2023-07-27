/*
Write a recursive function to print the following pattern:
*
***
*****
*/
#include <stdio.h>

void starPattern(int);
int main(int argc, char const *argv[])
{
    starPattern(5);
    return 0;
}
void starPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    starPattern(n - 1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}
