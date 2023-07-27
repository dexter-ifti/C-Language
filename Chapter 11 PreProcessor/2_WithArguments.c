#include <stdio.h>

#define PI 3.14
#define AREA(x) (PI * x * x)
// for chaecking if a number is a digit or not
#define ISDIGIT(y) (y >= 48 && y <= 57)
// for checking if a number is in Capital letter or not
#define ISCAPITAL(ch) (ch >= 'A' && ch <= 'Z')

int main()
{
    // float radii, area;
    // printf("Enter the radius: ");   
    // scanf("%f", &radii);

    // printf("Area = %.2f\n", AREA(radii));

    // int g = 55;
    // printf("Is %d a digit? %d\n", g, ISDIGIT(g));

    char ch1 = 'h';
    printf("Is %c a capital letter? %d\n", ch1, ISCAPITAL(ch1));
    char ch2 = 'H';
    printf("Is %c a capital letter? %d\n", ch2, ISCAPITAL(ch2));

    return 0;
}

// Note:😉😉😉😉💖
// to see source code file 
//  run this command in terminal
// gcc -E-o filename.i filename.c
// 😜💖😢🎶🎶😉