#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (float)5/9 *(fahrenheit - 32);

    printf("temp in degree Celsius is %.2f", celsius);
    return 0;
}
