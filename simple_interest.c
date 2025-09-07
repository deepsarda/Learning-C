#include<stdio.h>

int main()
{
    int p,r,t;
    float si;

    printf("Enter the principal amount: ");
    scanf("%d",&p);

    printf("Enter the rate of interest per annum: ");
    scanf("%d",&r);

    printf("Enter the time in years: ");
    scanf("%d",&t);

    // Simple Interest = (Principal * Rate * Time)/100
    si=(p*r*t)/100;

    printf("The simple interest is: %f\n",si);

    return 0;
}