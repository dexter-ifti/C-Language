#include <stdio.h>
void print(char[]);
int main()
{
    char str[20];
    printf("Enter a string : ");
    gets(str);
    printf("print the string using puts() function\n");
    puts(str);
    printf("print the string using printf() function\n");
    printf("%s\n", str);
    printf("print the string using costum print() function\n");
    print(str);
    return 0;
}
void print(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
