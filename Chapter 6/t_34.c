/*
Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
*/
#include <stdio.h>
void sum_avg(int a, int b, int *sum, float *avg);   
int main()
{
    int a, b, sum;
    float avg;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum_avg(a, b, &sum, &avg);
    printf("Sum = %d and Average = %.2f", sum, avg);  
    return 0;
}
void sum_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
