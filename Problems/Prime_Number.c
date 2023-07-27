#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    
    return 0;
}

bool isPrime(int n)
{
    if ( n == 1 || n == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
