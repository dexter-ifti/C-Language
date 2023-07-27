// Take name and salary of two employees as input from the user and write them to a text file 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    char name1[20];
    char name2[20];
    long int salary1;
    long int salary2;
    printf("Enter Name and Salary of the first employee: ");
    scanf("%s %ld", name1, &salary1);
    printf("Enter Name and Salary of the second employee: ");
    scanf("%s %ld", name2, &salary2);

    fptr = fopen("Employee.txt","w");
    fprintf(fptr, "Employee 1 : \n");
    fprintf(fptr, "Name : %s\n", name1);
    fprintf(fptr, "Salary : %ld\n", salary1);

    fprintf(fptr, "Employee 2 : \n");
    fprintf(fptr, "Name : %s\n", name2);
    fprintf(fptr, "Salary : %ld\n", salary2);

    return 0;
}
