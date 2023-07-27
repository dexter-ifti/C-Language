#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum_of_cubes_of_digits = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0)
    {
        sum_of_cubes_of_digits += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }

    if (num == sum_of_cubes_of_digits)
    {
        printf("The number is an Armstrong number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }
    
    
    return 0;
}
