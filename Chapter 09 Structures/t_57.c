/*
Create two dimensional vector using structure
*/
#include <stdio.h>

struct vector
{
    /* data */
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 1;
    v1.y = 2;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 3;
    v2.y = 4;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    return 0;
}