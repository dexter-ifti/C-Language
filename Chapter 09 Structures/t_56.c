#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std ; 

int main(int argc, char const *argv[])
{
    // typedef <previous_name> <alias_name>
    // We can use both the previous name and the alias name to declare variables
    typedef int* intPointer;
    intPointer a, b, c;
    int x = 5;
    a = &x;
    b = &x;
    c = &x;
    std s1, s2, s3;
    s1.id = 1;
    s2.id = 2;
    s3.id = 3;
    typedef unsigned int uint;
    uint n, i, j;
    typedef int Integer;
    Integer a = 5;
    return 0;
}
