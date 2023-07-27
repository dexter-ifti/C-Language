#include <stdio.h>
#include <conio.h>

#define MAX_LENGTH 1000

int main(int argc, char const *argv[])
{
    char text[MAX_LENGTH];
    int line = 0, word = 0, character = 0,
        i;

    printf("Enter Any Text : ");
    gets(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '\n' || text[i] == '.' || text[i] == '?')
        {
            line++;
        }
    }

    i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == ' ' || text[i] == '\t')
        {
            word++;
        }

        if (text[i] != '\n' && text[i] != '\t')
        {
            character++;
        }

        i++;
    }

    printf("Number of lines: %d\n", line);
    printf("Number of words: %d\n", word + 1);
    printf("Number of characters: %d\n", character);

    getch();
    return 0;
}
