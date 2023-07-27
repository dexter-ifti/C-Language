// check whether the file exists or not before opening the file

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("Taha.txt", "r");

    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        printf("This file exist\n");
    }
    
    
    return 0;
}
