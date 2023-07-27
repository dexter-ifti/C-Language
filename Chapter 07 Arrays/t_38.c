/*
Write a program to create an array of 10 integers and store a multiplication table of 5 in it
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10];
    for(int i = 0; i < 10; i++){
        arr[i] = (i+1) * 5;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
