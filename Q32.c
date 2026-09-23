#include <stdio.h>                         

int main()
{
    int n, i, x;                           
    int max, second;                      

    printf("Enter total numbers : ");                   
    scanf("%d", &n);                       

    printf("Enter first number : ");        
    scanf("%d", &max);                     

    printf("Enter second number : ");       
    scanf("%d", &second);                  

    if(second > max)                      
    {
        x = max;                          
        max = second;                    
        second = x;                        
    }

    for(i = 3; i <= n; i++)                
    {
        printf("Enter number: ");          
        scanf("%d", &x);                   
        if(x > max)                       
        {
            second = max;                  
            max = x;                       
        }

        else if(x > second && x != max)    
            second = x;                    
    }

    printf("Maximum = %d\n", max);         
    printf("Second Maximum = %d", second); 

    return 0;                              
}
