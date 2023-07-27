#include <stdio.h>

int main()
{
    FILE *fptr;
    int num;
    int num2;
    fptr = fopen("Taha.txt", "r");
    fscanf(fptr, "%d", &num);
    fscanf(fptr, "%d", &num2);
    fclose(fptr);

    printf("Value of num is %d\n", num);
    printf("Value of num2 is %d\n", num2);
    return 0;
}
