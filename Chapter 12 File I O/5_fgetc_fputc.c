#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    // fgetc and fputc are used to read and write a single character
    // fgetc is used to read a single character from a file
    fptr = fopen("GetcDemo.txt", "r");
    // char c = fgetc(fptr);
    printf("The character I read was %c\n", fgetc(fptr));
    printf("The character I read was %c\n", fgetc(fptr));
    printf("The character I read was %c\n", fgetc(fptr));
    printf("The character I read was %c\n", fgetc(fptr));
    printf("The character I read was %c\n", fgetc(fptr));
    printf("The character I read was %c\n", fgetc(fptr));


    // fputc is used to write a single character to a file
    fptr = fopen("PutcDemo.txt", "w");
    putc('T', fptr);
    putc('a', fptr);
    putc('h', fptr);
    putc('a', fptr);

    return 0;
}
