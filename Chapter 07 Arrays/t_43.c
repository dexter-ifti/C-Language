/*
Create an array of size 3x10 containing multiplication tables of the numbers entered by user.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    int arr[3][10];
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = num1*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[1][i] = num2*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[2][i] = num3*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", num1, i, arr[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", num2, i, arr[1][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", num3, i, arr[2][i]);
    }
    return 0;
}