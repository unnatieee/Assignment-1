#include <stdio.h> 

int main()
{
    float M, P, C, E, CM; 
    printf("Enter Maths marks: ");
    scanf("%f", &M);

    printf("Enter Physics marks: ");
    scanf("%f", &P);

    printf("Enter Chemistry marks: ");
    scanf("%f", &C);                    
    printf("Enter Entrance Exam marks: "); 
    scanf("%f", &E);                       
    CM = M/2 + P/2 + C/2 + E/2;   

    printf("Cut-off mark = %.2f", CM);

    return 0;}