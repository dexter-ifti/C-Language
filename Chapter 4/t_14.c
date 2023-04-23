#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
        
    }
    printf("\n");
    int k = 0;
    while (k < 10)
    {
        if (k == 7)
        {
            break;
        }
        printf("%d ", k);
        k++;
    }    
    return 0;
}
