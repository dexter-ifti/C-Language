#include <stdio.h>

int tenTimes(int*);
int main(int argc, char const *argv[])
{
    int i = 10;
    tenTimes(&i);
    printf("%d\n", i);
    return 0;
}
int tenTimes(int* i)
{
    *i *= 10;
}
