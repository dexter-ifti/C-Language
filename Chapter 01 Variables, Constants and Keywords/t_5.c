#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, t ; 
    float r, si;

    printf("Enter The Principle Value :");
    scanf("%d", &p);
    printf("Enter The Rate :");
    scanf("%f", &r);
    printf("Enter The Time :");
    scanf("%d", &t);

    si = (float)(p*t*r)/100;

    printf("S.I. of given data is %.2f", si); 
    
    return 0;
}
