#include <stdio.h>
/*
Write a program to find the grade of a student given his marks based on below:

90-100	A
80-90	B
70-80	C
60-70	D
<70	F
*/

int main()
{
    int marks;
    printf("After Last Student Marks Press 11\n");
    while (1)
    {
        printf("Enter marks : ");
        scanf("%d", &marks);

        switch (marks / 10)
        {

        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 1 :
            printf("Quitting !!");
            goto end;
            break;
        default:
            printf("F\n");
            break;
        }
    }
    end :
    return 0;
}
