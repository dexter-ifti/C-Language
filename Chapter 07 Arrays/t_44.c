/*
Create a three-dimensional array and print the address of its elements in increasing order.
*/
#include <stdio.h>

int main()
{
    int arr[2][2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Address of arr[%d][%d][%d] = %u\n", i, j, k, &arr[i][j][k]);
            }
            
        }
    }
    
    return 0;
}
