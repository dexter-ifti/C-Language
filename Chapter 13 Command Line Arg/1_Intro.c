#include <stdio.h>

int main(int argc, char const *argv[])
{
    if(argc == 1)
    {
        printf("No extra command line arguments passed.\n");
    }
    else if (argc >= 2)
    {
        printf("The $$ %d $$ command line arguments passed are: \n", argc);
        for (int i = 0; i < argc; i++)
        {
            printf("The value of argv[%d] is %s\n", i, argv[i]);
        }
        
    }
    return 0;
}
