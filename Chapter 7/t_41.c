/*
Write a program containing functions that counts the number of positive integers in an array.
*/

#include <stdio.h>

int count(int *);
int main()
{
    int arr[5] = {1, -2, 3, -4, 5};
    printf("Positive numbers in array: %d", count(arr));
    return 0;
}
int count(int *ptr)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (ptr[i] > 0)
        {
            count++;
        }
    }
    return count;
}
