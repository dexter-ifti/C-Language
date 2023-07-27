// Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.

#include <stdio.h>

int main()
{
    FILE *fptr;
    int num;
    printf("Enter the number you want the table of: ");
    scanf("%d", &num);

    fptr = fopen("Table.txt", "w");
    for(int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d X %d = %d\n", num, i+1, num * (i+1));
    }
    printf("Table of %d is written successfully to the file.\n", num);
    printf("Please check the file.\n");
    return 0;
}
