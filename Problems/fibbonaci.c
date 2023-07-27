#include <stdio.h>

int fibbonaci_recursive(int);
int fibbonaci_iterative(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", fibbonaci_recursive(i));
    // }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibbonaci_iterative(i));
    }
    
    

    return 0;
}

int fibbonaci_iterative(int n)
{
    int a = 0, b = 1, c;
    if (n == 0)
    {
        return a;
    }
    else if (n == 1)
    {
        return b;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    
}

int fibbonaci_recursive(int n)
{
    if (n == 1 || n ==0)
    {
        return n;
    }
    else
    {
        return fibbonaci_recursive(n-1) + fibbonaci_recursive(n-2);
    }
    
}
