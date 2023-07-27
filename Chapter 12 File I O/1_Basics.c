#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Sample.txt", "w");// for writing to a file
    fptr = fopen("Sample.txt", "r"); // for reading to file
    return 0;
}
