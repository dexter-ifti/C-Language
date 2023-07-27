#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    printf("The largest element in the array is %d", max);
    return 0;
}