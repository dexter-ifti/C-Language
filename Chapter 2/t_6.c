#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (num % 97 == 0)
    {
        printf("Number is dividible by 97");
    } else {
        printf("Number is not dividible by 97");
    }
    return 0;
}
