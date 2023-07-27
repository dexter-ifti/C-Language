#include <stdio.h>

int main()
{
    int length;
    int width;

    printf("Enter Length and Width : ");
    scanf("%d %d", &length, &width);

    int area = length * width;

    printf("Area of Rectangle is : %d\n", area);
    return 0;
}
