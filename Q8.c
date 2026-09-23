#include <stdio.h> 

int main()
{
    int total = 3558150; 

    int days, hours, minutes, seconds;
    
    days = total / 86400;           

    total = total % 86400;          
    hours = total / 3600;   
    total = total % 3600;             
    minutes = total / 60;     
    seconds = total % 60;

    printf("%d days %d hours %d minutes %d seconds",
           days, hours, minutes, seconds);


    return 0;
}