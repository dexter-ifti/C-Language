#include <stdio.h>

int main()
{
    int a = 10;
    int* p = &a;
    printf("%u\n", p); // gives the address of a in decimal
    printf("%p\n", p); // gives the address of a in hexadecimal(8-bit)
    printf("%x\n", p); // gives the address of a in hexadecimal(6-bit)
    printf("%d\n", *p); // gives the value of a
    printf("%d\n", *(&a)); // gives the value of a
    printf("%p\n", *(&p)); // gives the address of a in hexadecimal(8-bit)
    printf("%p\n", &p); // gives the address of p in hexadecimal(8-bit)
    return 0;
}
