#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[80];
    char str2[80];
    char c ;
    int i = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string character by character : ");
    while (c != '\n')
    {
    fflush(stdin);
    scanf("%c", &c);
    str2[i] = c;
    i++;    
    }
    
    str2[i] = '\0';
    
    printf("The value of first string is: %s \n", str1);
    printf("The value of second string is: %s \n", str2);
    return 0;
}

