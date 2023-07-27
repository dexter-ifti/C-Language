/*
Write a program to print first n natural numbers using for loop.
*/
#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        printf("%d \a", i);
    }
    
    return 0;
}
