#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100] = "taha is good boy";
    int i, words;
    i = words = 0;
    while (str[i] != '\0')
    {
        if (str[i] ==' ' || str[i] == '\t' || str[i] == '\n')
        {
            words++;
        }
        i++;
    }

    printf("Total words are : %d\n", words);

    return 0;
}
