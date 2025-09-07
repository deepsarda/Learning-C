#include<stdio.h>

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Even numbers have a remainder of 0. Which means even numbers are evaluated as false.
    if(num % 2){ 
        printf("%d is odd.\n", num);
    }else{
        printf("%d is even.\n", num);
    }

    return 0;
}