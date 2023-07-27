#include <stdio.h>

int main()
{
    int num, digits = 0 , temp;

    printf("Enter Number : ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0)
    {
        printf("There is only One digit in %d number", num);
    }

    else
    {
        while (temp != 0)
        {
            temp /= 10;
            digits++;
        }

        printf("Total %d Digits are in Number %d ", digits, num);
    }
    return 0;
}