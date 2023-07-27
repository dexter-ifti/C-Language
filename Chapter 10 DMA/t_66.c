/*
Create an array of the multiplication table of 7 up to 10 (7x10=70). 
Use realloc to make it store 15 numbers(from 7x1 to 7x15).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("7 x %d = %d\n", i+1, 7*(i+1));
    }
    
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        printf("7 x %d = %d\n", i+1, 7*(i+1));
    }
    
    return 0;
}
