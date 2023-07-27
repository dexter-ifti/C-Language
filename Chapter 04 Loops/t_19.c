/*
Write a program to calculate the factorial of a given number using for loop.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fact = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
