/*Write a program to determine whether a character entered by the user is lowercase or not.*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);

    // if (islower(ch) != 0)
    // {
    //     printf("Enterd Character %c is in LowerCase", ch);
    // }
    // else
    // {
    //     printf("Enterd Character %c is not in LowerCase", ch);
    // }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Enterd Character %c is in LowerCase", ch);
    }
    else
    {
        printf("Enterd Character %c is not in LowerCase", ch);
    }

    return 0;
}
