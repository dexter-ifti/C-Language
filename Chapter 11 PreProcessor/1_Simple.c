#include <stdio.h>

#define PI 3.14159
// PI is called a macro template (usually in capital letters)
// 3.14159 is called a macro expansion

int main()
{
    float radius = 6.4, area;
    area = PI * radius * radius;
    printf("Area = %.2f\n", area);

    return 0;
}

// Some more Examples of Preprocessor Directives
// #define AND &&
// #define OR ||
// #define Arrange (a > 25 AND a < 55)
// #define FOUND printf ("Yahoo ! I found it\n")
