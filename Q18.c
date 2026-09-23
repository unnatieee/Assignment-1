#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);             


    (ch >= 'A' && ch <= 'Z') ?
    printf("Capital letter") :
    printf("Not a capital letter");

    return 0;
}