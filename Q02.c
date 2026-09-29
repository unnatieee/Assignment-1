#include <stdio.h>                    

int main()
{
    float a, b, c, d, e;            
    float total, percentage;         

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    
    total = a + b + c + d + e;       

    percentage = total / 5;          
                                    
    printf("Total = %.2f\n", total); 
    printf("Percentage = %.2f", percentage);
                                     
    return 0;                         
}
