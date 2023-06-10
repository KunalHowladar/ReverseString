// To find the reverse of a string by using library function

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    printf("Reversed string : %s ", strrev(str));
    return 0;
}