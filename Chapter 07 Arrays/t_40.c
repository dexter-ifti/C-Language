#include <stdio.h>

void reverse(int *, int);
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void reverse(int *ptr, int size)
{
    // int start = 0;
    // int end = size-1;
    // while (start <= end)
    // {
    //     int temp = ptr[start];
    //     ptr[start] = ptr[end];
    //     ptr[end] = temp;
    //     start++;
    //     end--;
    // }
    for (int i = 0; i < (size/2); i++)
    {
        int temp = ptr[i];
        ptr[i] = ptr[size-i-1];
        ptr[size-i-1] = temp;
    }
    
}
