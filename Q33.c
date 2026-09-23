#include <stdio.h>                    

int main()
{
    int n, i, x;                      
    int max, min;                     

    printf("Enter total number : ");              
    scanf("%d", &n);                  

    printf("Enter first number: ");   
    scanf("%d", &x);                 

    max = x;                          
    min = x;                         

    for(i = 2; i <= n; i++)           
    {
        printf("Enter number: ");     
        scanf("%d", &x);              

        if(x > max)                   
            max = x;                  

        if(x < min)                   
            min = x;                  
    }

    printf("Maximum = %d\n", max);    
    printf("Minimum = %d", min);      
    return 0;                        
}