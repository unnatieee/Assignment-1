#include <stdio.h>

int main()
{
    float P, R, T, SI; 
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &P, &R, &T);
   
    SI = (P * R * T) / 100;
    printf("Simple Interest = %f", SI);
    
    return 0; 
}
