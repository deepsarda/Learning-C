#include<stdio.h>

int main(){
    float base, height, area;

    printf("Enter the base length of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);   
    
    // Area = 1/2 * base * height
    area = 0.5 * base * height;

    printf("The area is %f.\n", area);

    return 0;
}