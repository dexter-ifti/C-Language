/*
Write a menu driven program which has following options:

Factorial of a number

Prime or not

Odd or even

Exit
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    printf("--------------------Menu------------------\n");
    printf("1. Factorial\n2. Prime Checker\n3. Odd/Even Checker\n4. Exit\n");
    int choice, num, fact;
    printf("Enter the Choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        fact = 1;
        printf("Enter the Number : ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("The Factorial of %d is %d\n", num, fact);

        break;
    case 2:
        printf("Enter the Number : ");
        scanf("%d", &num);

        if (num < 2)
        {
            printf("Not Prime\n");
            break;
        }
        

        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                printf("Not Prime\n");
                break;
            }
            else
            {
                printf("Prime");
                break;
            }
        }
        break;
    case 3:
        printf("Enter the number : ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
        break;

    case 4:
        exit(0);
    default:
        break;
    }
    return 0;
}
