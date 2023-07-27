/*
1. Write a C program that takes an array of integers and its size as input, and finds the second largest 
element in the array using pointers.
*/
#include <stdio.h>

void second_largest(int *, int*);

int main()
{
    // Initializing the array or U can take input from the user
    int arr[] = {5, 2, 67, 4, 55, 3};
    // finding the size of the array
    int n = sizeof(arr) / sizeof(int);
    printf("The size of the array is %d \n", n);
    // Calling the function -- Second Largest
    second_largest(arr, arr + 1);
    return 0;
}

void second_largest(int *ptr, int *ptr2)
{
    // initializing the largest and second largest with 0 
    // so that we can compare it with the array elements
    int largest = 0;
    int second_largest = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) > largest)
        {
            second_largest = largest;
            largest = *(ptr + i);
        }
        else if (*(ptr + i) > second_largest && *(ptr + i) != largest)
        {
            second_largest = *(ptr + i);
        }
    }
    *ptr2 = second_largest;
    printf("Second Largest Element is %d \n", *ptr2);
}