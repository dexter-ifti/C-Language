#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
    {
        rev = rev*10 + temp % 10;
        temp /= 10;
    }

    if (num == rev)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    // printf("%d", rev);
    
}
