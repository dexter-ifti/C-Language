#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    while(num != 0)
    {
        rev = rev *10 + num % 10;
        num /= 10;
    }

    printf("Reverse of the number is %d", rev);
    return 0;
}
