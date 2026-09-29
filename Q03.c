#include <stdio.h> 

int main()
{
    float basic, DA, HRA, gross;                                                                                                            

    printf("Enter basic salary: "); 
    scanf("%f", &basic);            

    printf("Enter DA: ");           
    scanf("%f", &DA);               

    printf("Enter HRA: ");          
    scanf("%f", &HRA);              

    gross = basic + DA + HRA;       
                                     

    printf("Gross Salary = %.2f", gross);
                                      

    return 0;                         
}