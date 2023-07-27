/*
Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(Consider 8x1 to 8x10)
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int n = 8;
    for (int i = 1; i < 10; i++)
    {
        int num = n*i;
        sum += num;
    }
    printf("sum = %d", sum);
    
    return 0;
}
