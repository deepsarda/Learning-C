#include<stdio.h>

int main(){

    int a, b, temp;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping: \nA = %d\nB = %d\n", a, b);

    return 0;
}