#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number", n);
            break;
        } 
    printf("%d is a prime number", n);
    }
    return 0;
}
