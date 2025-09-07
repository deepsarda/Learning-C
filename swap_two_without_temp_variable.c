#include<stdio.h>

int main(){

    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    a = a + b; // A = A + B

    b = a - b; // B = A + B - B => B = A
    a = a - b; // A = A + B - A => A = B

    printf("\nAfter swapping: \nA = %d\nB = %d\n", a, b);

    return 0;
}