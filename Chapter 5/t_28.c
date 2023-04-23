/*
Recursise function to find sum of n natural numbers
*/
#include <stdio.h>

int sum(int);
int main(int argc, char const *argv[])
{
    printf("%d", sum(10));
    return 0;
}

int sum(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return n + sum(n-1);
}
