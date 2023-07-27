#include <stdio.h>
void fxn(int);
int main()
{

    int i = 10;
    //will the following print the same address?
    printf("%p\n", &i);
    printf("%u\n", &i);
    fxn(i);
    return 0;
}
void fxn(int d)
{
    printf("%p\n", &d);
    printf("%u\n", &d);
}
