/*
Introduction to Dynamic Memory Allocation in C
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of malloc
    // int *ptr = (int *)malloc(4 * sizeof(int));

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element is : %d\n", i, ptr[i]);
    // }

    // use of calloc
    int *ptr = (int *)calloc(4, sizeof(int));

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    
    printf("\n");

    // use of realloc
    ptr = (int *)realloc(ptr, 3*sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the NEW value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("The NEW value of %d element is : %d\n", i, ptr[i]);
    }

    printf("\n");

    free(ptr);
    
    return 0;
}
