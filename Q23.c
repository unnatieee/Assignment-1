#include <stdio.h>

int main()
{
    int n, p, i;
    int result = 1;

    printf("Enter number and power: ");
    scanf("%d %d", &n, &p);

    for(i = 1; i <= p; i++)
    {
        result = result * n;
    }

    printf("Answer = %d", result);

    return 0;
}