#include <stdio.h>

int func(int[]);
int func2(int*);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", arr[4]);
    func(arr);
    printf("\n");
    printf("%d\n", arr[4]);
    // printf("\n");
    // func2(arr);
    return 0;
}
int func(int arr[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    arr[4] = 55;// Very Important if we change the value here it will also change in main function
    return 0;
}
int func2(int *ptr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
        // printf("%d ", ptr[i]); both will give same output
    }
    return 0;
}