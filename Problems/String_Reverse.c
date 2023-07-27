#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20], rev[20];
    printf("Enter the String do you want to reverse : ");
    scanf("%s", str);

    strcpy(rev,strrev(str));

    printf("the rev string is %s \n",rev);

    
    
    return 0;
}
