#include <stdio.h> 

int main()
{
    int x, n, y; 

    printf("Enter x and n: "); 
    scanf("%d %d", &x, &n);  

    if(n == 1)
        y = 1 + x;

    else if(n == 2)
        y = 1 + x / n; 

    else if(n == 3) 
        y = 1 + x * n;
        
    else
        y = 1 + n * x;

    printf("Y = %d", y); 

    return 0;
}