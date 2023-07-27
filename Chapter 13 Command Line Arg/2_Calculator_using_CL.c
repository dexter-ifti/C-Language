#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc != 4)
    {
        printf("You have entered wrong number of arguments. Please try again.\n");
    }
    else
    { 
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        char op = argv[2][0];
        switch (op)
        {
        case '+':
            printf("The sum of %d and %d is %d\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("The difference of %d and %d is %d\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("The product of %d and %d is %d\n", num1, num2, num1*num2);
            break;
        case '/':
            printf("The division of %d and %d is %d\n", num1, num2, num1/num2);
            break;
        default:
            printf("The operation is not supported\n");
            break;
        }
    }
    return 0;
}
