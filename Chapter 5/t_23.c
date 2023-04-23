/*
Function average() takes three integer arguments and returns the average of the
*/
#include <stdio.h>

int average(int, int, int);

int main(int argc, char const *argv[])
{
    printf("%d", average(1, 2, 3));
    return 0;
}
int average(int a, int b, int c)
{
    int sum = a + b + c;
    int avg  = sum / 3;

    return avg;
}
