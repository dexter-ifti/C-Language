#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char c;
    fptr = fopen("GetcDemo.txt", "r");
    c = fgetc(fptr);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
