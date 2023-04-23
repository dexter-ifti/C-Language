/*
Find the factorial of a number using recursion
*/
#include <stdio.h>

int factorial(int);
int main(int argc, char const *argv[])
{
    printf("%d", factorial(5));
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    } 
}