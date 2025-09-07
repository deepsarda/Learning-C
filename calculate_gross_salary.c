#include<stdio.h>

int main(){

    int basic_salary;
    float hra, hra_percentage, da, da_percentage, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%d",&basic_salary);

    printf("Enter the HRA percentage as <number>%%: ");
    scanf("%f%%",&hra_percentage);

    printf("Enter the DA percentage as <number>%%: ");
    scanf("%f%%",&da_percentage);
    
    hra = hra_percentage * basic_salary / 100;
    da = da_percentage * basic_salary / 100;
    gross_salary = basic_salary + hra + da;

    printf("HRA: %f\n", hra);
    printf("DA: %f\n", da);
    printf("Gross Salary: %f\n", gross_salary);

    return 0;
}