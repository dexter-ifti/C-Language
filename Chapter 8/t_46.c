#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "taha";
    char s2[] = "iftikhar";
    char s3[20];

    // puts(strcat(s1, s2));// add string s2 in string s1
    printf("the length of String s1 is %d \n", strlen(s1));
    printf("the length of String s2 is %d \n", strlen(s2));
    // printf("the length of String s1 + s2 is %d \n", strlen(strcat(s1, s2)));
    // printf("the reverse of String s1 is %s \n", strrev(s1));
    // printf("the reverse of String s2 is %s \n", strrev(s2));
    // strcpy(s3, strcat(s1, s2));
    puts(s3);
    puts(strrev(s3));
    printf("%s is a good friend of %s \n", s1, s2);
    return 0;
}