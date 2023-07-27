// Write a program to read a text file character by character and write its content twice in a separate file.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("Sample.txt", "r");
    fptr2 = fopen("Copy_Sample.txt", "w");

    char c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        fputc(c, fptr2);
        c = fgetc(fptr1);
        
    }

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
