#include <stdio.h>

int main()
{
    int n, temp, digit;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(reverse == temp)
        printf("Palindrome");

    else
        printf("Not a palindrome");

    return 0;
}