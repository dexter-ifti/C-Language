/*
Write a program to print the multiplication table of a given number n.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", n, i, n*i);
        printf("\n");
    }
    return 0;
}
