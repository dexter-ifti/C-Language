#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    int *p = &i;
    int **q = &p;
    printf("%d\n",**q);
    return 0;
}
