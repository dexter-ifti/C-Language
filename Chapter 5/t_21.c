/*
Use the library function to calculate the area of a square with side a.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, area;
    printf("Enter the side of the square: ");
    scanf("%f", &a);
    area = pow(a, 2);
    printf("The area of the square is: %.2f", area);
    return 0;
}

