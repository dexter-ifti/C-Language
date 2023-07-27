#include <stdio.h>
#include <string.h>


struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student s1, s2, s3;
    strcpy(s1.name, "Taha");
    strcpy(s2.name, "Ifti");
    strcpy(s3.name, "Dexter");
    s1.id = 1;
    s2.id = 2;
    s3.id = 3;
    s1.marks = 100;
    s2.marks = 99;
    s3.marks = 98;
    s1.fav_char = 'T';
    s2.fav_char = 'I';
    s3.fav_char = 'D';
    printf("s1's name is %s, his id is %d, his marks are %d and his fav_char is %c\n", s1.name, s1.id, s1.marks, s1.fav_char);
    printf("s2's name is %s, his id is %d, his marks are %d and his fav_char is %c\n", s2.name, s2.id, s2.marks, s2.fav_char);
    printf("s3's name is %s, his id is %d, his marks are %d and his fav_char is %c\n", s3.name,s3.id, s3.marks, s3.fav_char);

    return 0;
}