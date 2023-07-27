// create an 2d array and take user input and print it
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{

    int arr[3][3];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the array are: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    getch();

    return 0;
}
