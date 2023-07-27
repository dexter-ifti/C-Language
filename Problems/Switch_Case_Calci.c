#include <stdio.h>

int main()
{
    int num1, num2; 
    char operator;

    printf("Enter 2 Number : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the Operand : ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("The sum of %d and %d is %d \n", num1, num2, num1+num2);
        break;
    case '-':
        printf("The difference b/w %d and %d is %d \n", num1, num2, num1-num2);
        break;
    case '*':
        printf("The multiplication of %d and %d is %d \n", num1, num2, num1*num2);
        break;
    case '/':
        printf("The Division of %d and %d is %.2f \n", num1, num2, (float)(num1/num2));
        break;
    
    default:
        printf("Error: Invalid operator.\n");
        break;
    }
    return 0;
}
