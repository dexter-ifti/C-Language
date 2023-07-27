#include <stdio.h>

int main()

{

    int arr[] = {2, 1, 6, 7, 4, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        // finding out the correct position to insert
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        // insertion
        arr[prev + 1] = curr;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}