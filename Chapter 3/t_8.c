/*Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float percentage;
    int marks1, marks2, marks3;

    printf("Enter Percentage Marks !!\n");

    printf("Enter Marks of First Subject : \n");
    scanf("%d", &marks1);
    printf("Enter Marks of Second Subject : \n");
    scanf("%d", &marks2);
    printf("Enter Marks of Third Subject : \n");
    scanf("%d", &marks3);

    percentage = (marks1 + marks2 + marks3)/3;

    if (percentage >= 40 || marks1 >= 33 || marks2 >= 33 || marks3 >= 33)
    {
        printf("PASS 😎");
    } else {
        printf("FAIL😒");
    }
    getch();
    return 0;
}
