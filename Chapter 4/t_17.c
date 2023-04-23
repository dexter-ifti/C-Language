/*
Write a program to sum the first ten natural numbers using a while loop.
Write a program to sum the first Hundred natural numbers using a do-while loop.

*/
#include <stdio.h>

int main()
{
    int sum, i;
    i = 1;
    sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first 10 natural numbers is %d\n", sum);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 100);
    printf("The Sum of first 100 natural numbers is %d\n", sum);  
    
    return 0;
}
