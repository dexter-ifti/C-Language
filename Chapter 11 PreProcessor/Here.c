#include <stdio.h>
#include <string.h>


int main() {
    // Write C code here
    char str[20];
    printf("Enter any string : ");
    gets(str);

    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)   
    {
        if (str[i] != str[j])
        {
            printf("False\n");
            break;;
        }
    }
    printf("true\n");
    
    return 0;
}