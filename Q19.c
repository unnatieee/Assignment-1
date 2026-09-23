#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");

    scanf(" %c", &ch);

    (ch >= 'a' && ch <= 'z');
    printf("Small letter");
    printf("Not a small letter");

    return 0;
}