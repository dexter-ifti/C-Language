/*
Write a program to create an array of 10 integers and store a multiplication table of user enterd number in it
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int arr[10];
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
