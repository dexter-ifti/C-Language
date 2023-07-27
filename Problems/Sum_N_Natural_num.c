#include <stdio.h>

void sum_using_formula(int);
void sum_iterative(int);
int sum_recursion(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum_using_formula(n);
    sum_iterative(n);
    printf("\nSum of first %d natural numbers is %d", n, sum_recursion(n));

    return 0;
}

void sum_using_formula(int n)
{
    int sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers is %d\n", n, sum);
}

void sum_iterative(int n)
{
    int sum = 0;
    for (int i = 0; i <= n ; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers is %d", n, sum);
}

int sum_recursion(int n)
{
    if (n == 0)
        return 0;
    else
        return sum_recursion(n - 1) + n;
}
