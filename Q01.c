#include<stdio.h>
int main()
{
    float p, t ,r, a;
    printf("Enter the priciniple amount : \n");
    scanf("%f" , &p);

    printf("Enter the duration: \n");
    scanf("%f" , &t);

    printf("Enter the rate of interest : \n");
    scanf("%f" , &r);

    printf("The simple interest is : %0.3f" , (p*r*t)/100 );
    return 0;

}
