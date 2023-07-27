#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int);

int main()
{
    int n1, n2;
    printf("Enter the Range : ");
    scanf("%d %d", &n1, &n2);

    printf("The Prime Numbers Between %d and %d are : ", n1, n2);
    for (int i = n1; i < n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d\t", i);
        }
    }

    return 0;
}

bool isPrime(int n)
{
    if (n == 1 || n == 2)
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
