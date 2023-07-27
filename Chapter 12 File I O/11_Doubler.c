#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    FILE *ptr;
    ptr = fopen("Doubler.txt", "r+");
    fscanf(ptr, "%d", &num);
    num *= 2;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
