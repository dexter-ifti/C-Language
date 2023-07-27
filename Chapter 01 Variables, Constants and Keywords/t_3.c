#include <stdio.h>
int main()
{
    float radii, areaOfCircle, volumeOfCylinder;
    int height;

    printf("Enter Radii : ");
    scanf("%f", &radii);

    areaOfCircle = 3.14 * radii * radii;

    printf("Area of Circle is : %.2f\n", areaOfCircle);

    printf("Enter Height of Cylinder : ");
    scanf("%d", &height);

    volumeOfCylinder = areaOfCircle * height;

    printf("Volume of Cylinder is : %.2f", volumeOfCylinder);

    return 0;
}
