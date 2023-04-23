/*
function fibbonacci(n) returns the nth number in the fibbonacci sequence
*/
#include <stdio.h>

int fibbonacci(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The %dth number in the fibbonacci sequence is %d", n, fibbonacci(n));
    return 0;
}
int fibbonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibbonacci(n-1) + fibbonacci(n-2);
    }
}